#!/usr/bin/env bash

# Compile and create static library 
clang++ -std=c++17 -c -I include/ src/sum.cpp -o build/sum.o
clang++ -std=c++17 -c -I include/ src/subtract.cpp -o build/subtract.o
ar rcs build/libipb_arithmetic.a build/sum.o build/subtract.o 

# Compile main.cpp and link with the static library
clang++ -std=c++17 -c -I include/ src/main.cpp -o build/main.o
clang++ -std=c++17 build/main.o -L build -lipb_arithmetic -o results/bin/main

