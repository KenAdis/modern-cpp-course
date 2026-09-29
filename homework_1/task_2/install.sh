#!/bin/env bash

# Install the project using CMake
cmake -S . -B build -DCMAKE_INSTALL_PREFIX="$PWD/install"
cmake --build build --target install