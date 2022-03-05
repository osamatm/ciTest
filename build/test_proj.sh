#!/bin/bash

if ! [ -d googletest-release-1.10.0 ]
then
    pushd ../test
    tar -zxvf googletest-release-1.10.0.tar.gz
    cd googletest-release-1.10.0
    mkdir -p build
    cd build && cmake .. && make
    popd
fi

pushd ../test/UnitTest

if [ -e ./output/test ]
then
    make clean
fi

if ! [ -d ./output ]
then
    mkdir -p ./output
fi

make all || exit -1;

./output/test
popd
