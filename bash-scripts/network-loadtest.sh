#!/bin/bash

# Pull latest nginx
sudo crictl pull nginx:latest

# Create Nginx deployment
echo "apiVersion: apps/v1
kind: Deployment
metadata:
  name: nginx-deployment
spec:
  replicas: 1
  selector:
    matchLabels:
      app: nginx
  template:
    metadata:
      labels:
        app: nginx
    spec:
      containers:
      - name: nginx
        image: nginx:latest
        ports:
        - containerPort: 80" >> nginx-deployment.yaml

# Update package list, install python 3 and pip 
sudo apt update
sudo apt install python3 python3-pip -y
pip3 install locust
/home/ubuntu/.local/bin/locust --version

# Create nginx user to make GET requests to nginx
echo "from locust import HttpUser, task, between

class NginxUser(HttpUser):
    wait_time = between(1, 2)

    @task
    def load_nginx(self):
        self.client.get(\"/\")" >> load_test.py

# Get current IP address
ip a | grep eth0 | grep -E '[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}' | awk '{print $2}' | cut -d / -f 1

# Get kubernetes service
kubectl get svc | grep -E '[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}' | awk '{print $3}'

# Run Load Test (Locust may be located in ~/.local/bin/locust, which is not in $PATH)
~/.local/bin/locust --headless --users 1000 --spawn-rate 1 -f load_test.py -H http://10.224.0.4:31453
