#!/bin/bash

# 行番号をprintするには、 -g が必要
# yum install -y binutils-devel が必要
g++ -g main.cpp -lbfd
