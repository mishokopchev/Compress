//
// Created by Mihail on 12/19/2016.
//

#ifndef ALGORITHM_HUFFMAN_HASHMAP_H
#define ALGORITHM_HUFFMAN_HASHMAP_H


#include "Entry.h"

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

    void remove();




};


#endif //ALGORITHM_HUFFMAN_HASHMAP_H
