#!/bin/bash
gcc -wall -wextra -werror -pedantic -c *.c
ar rc liballa.a *.o
