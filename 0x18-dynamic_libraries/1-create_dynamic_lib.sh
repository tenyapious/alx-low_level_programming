#!/bin/bash
gcc -c -fPIC _*.c
gcc -shared -o liball.so _*.o
