#!/bin/bash
# This Script will place the CPU under high load

#run 10 times
# use Data Destroyer to create a 1GB backup with a single massive block
#removes file when complete
for i in {1..10};

do dd if=/dev/zero of=test.iso bs=1G count=1; rm test.iso;

done
