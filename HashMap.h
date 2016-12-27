//
// Created by Mihail on 12/19/2016.
//

#ifndef ALGORITHM_HUFFMAN_HASHMAP_H
#define ALGORITHM_HUFFMAN_HASHMAP_H


#include "Entry.h"
#include <iostream>

const int TABLE_SIZE = 256;

class HashMap {
private:
    Entry **table;
    int size;

public:
    HashMap();

    ~HashMap();

    bool isEmpty();

    int get(char _key);

    void put(char _key, int _value);

    bool containsKey(char _key);

    void print();

    void put(Entry &entry);

    void create(std::string input);

    Entry **getTable();

    int getSize();

};


#endif //ALGORITHM_HUFFMAN_HASHMAP_H
