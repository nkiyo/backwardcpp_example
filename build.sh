#!/bin/bash

g++ -c main.cpp backward.cpp
# TODO: yum install -y binutils-devel
g++ -o output main.o backward.o -lbfd
