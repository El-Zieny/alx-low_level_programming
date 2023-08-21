#!/bin/bash
gcc -fPIC -g -c -Wall -pedantic -Werrer -Wextra *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o -ls
