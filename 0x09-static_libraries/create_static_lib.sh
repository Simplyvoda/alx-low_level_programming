#!/bin/bash
#this script creates a static library called "liball.a"
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
ar -rc liball.a *.o
ranlib liball.a
