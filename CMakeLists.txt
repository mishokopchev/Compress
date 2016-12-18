cmake_minimum_required(VERSION 3.6)
project(algorithm_huffman)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp FreqTable.cpp FreqTable.h Node.cpp Node.h)
add_executable(algorithm_huffman ${SOURCE_FILES})