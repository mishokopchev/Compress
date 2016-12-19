//
// Created by Mihail on 12/19/2016.
//

#ifndef ALGORITHM_HUFFMAN_ENTRY_H
#define ALGORITHM_HUFFMAN_ENTRY_H

#include <cmath>

class Entry {
private:
    char key;
    int value;
    Entry * next;
public:

    Entry(char _key,int _value);
    char getKey() const;
    int getValue() const;
    Entry* getNext() ;
    int hash();

    void setKey(char _key);
    void setValue(int _value);
    void setNext(Entry* _entry);




};


#endif //ALGORITHM_HUFFMAN_ENTRY_H
