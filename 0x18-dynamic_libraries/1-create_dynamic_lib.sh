#!/bin/python3
gcc  -c -fPIC *.c
gcc -shared *.o -o liball.so
