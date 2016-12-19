//
// Created by Mihail on 12/18/2016.
//

#ifndef ALGORITHM_HUFFMAN_FREQUENCYTABLE_H
#define ALGORITHM_HUFFMAN_FREQUENCYTABLE_H

#include "Node.h"

static int MAX_CAPACITY=256;
static int MIN_CAPACITY=0;

template<typename K,typename V>
class FreqTable {
private:
    Node<K,V>* table;
    int size;
    int modCount;
    float loadFactor;


public:

    FreqTable(int _capacity);

};


#endif //ALGORITHM_HUFFMAN_FREQUENCYTABLE_H
