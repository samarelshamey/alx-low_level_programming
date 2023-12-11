#!/usr/bin/python3
gcc -c -fpic *.c
gcc -shared *.o -o liball.so
