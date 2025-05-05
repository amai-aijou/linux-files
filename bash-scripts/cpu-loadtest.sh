#!/bin/bash

# This Script will place the CPU under high load

dd if=/dev/zero of=test.iso bs=1G count=1;

rm test.iso;
