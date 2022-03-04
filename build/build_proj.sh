#!/bin/bash

if [ -e ../output/main ]
then
    make clean
fi

if ! [ -d ../output ]
then
    mkdir -p ../output
fi

make all
