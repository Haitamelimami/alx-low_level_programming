#!/bin/bash
gcc -c *.c
ar rc liball.a *.c
runlib liball.a
