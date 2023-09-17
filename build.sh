#!/bin/bash

# 行番号をprintするには、 -g が必要
g++ -c -g main.cpp backward.cpp
# TODO: yum install -y binutils-devel
g++ -o output main.o backward.o -lbfd
