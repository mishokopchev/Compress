cmake_minimum_required(VERSION 3.6)
project(algorithm_huffman)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Entry.cpp Entry.h HashMap.cpp HashMap.h HuffmanTree.cpp HuffmanTree.h Tnode.cpp Tnode.h List.hpp Node.hpp)
add_executable(algorithm_huffman ${SOURCE_FILES} Node.hpp)