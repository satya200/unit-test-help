#!/bin/sh

# -isystem /usr/local/include adds the path to the Google Test headers.
# -pthread adds support for multithreading with the pthreads library.
# test.cpp is the path to the source file you want to compile.
# -l gtest -l gtest_main links against the Google Test library.
# -o test specifies the output file.

g++ -isystem /usr/local/include -pthread bank.cpp bank_mock.cpp -l gtest -l gmock_main -l gmock -o test
