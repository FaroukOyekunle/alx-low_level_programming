#!/bin/bash
gcc -Wall -Werror -pedantic -fPIC -c *.c
gcc -shared -o liball.so *.o
