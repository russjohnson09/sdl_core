#!/usr/bin/env bash

sudo su
cd /
mkdir build
cd build

cmake ../sdl_core
make
make install