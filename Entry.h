//
// Created by Mihail on 12/19/2016.
//

#ifndef ALGORITHM_HUFFMAN_ENTRY_H
#define ALGORITHM_HUFFMAN_ENTRY_H


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



};


#endif //ALGORITHM_HUFFMAN_ENTRY_H
