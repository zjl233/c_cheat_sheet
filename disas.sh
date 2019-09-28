#!/usr/bin/env bash

input=$1
# delete file extension, for example vm.c -> vm
filename=${input[@]:0:-2}
gcc -g -c $filename.c
objdump -d -S $filename.o > $filename.s
