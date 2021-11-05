#!/bin/bash

echo "replace cpp with cxx in makefile"
./replace Makefile cpp cxx
echo "replace Worker with Robot in Worker.cpp"
./replace Worker.cpp Worker Robot

echo "try to replace with no arguments"
./replace
