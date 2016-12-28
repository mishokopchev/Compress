//
// Created by Mihail on 12/19/2016.
//

#ifndef ALGORITHM_HUFFMAN_ENTRY_H
#define ALGORITHM_HUFFMAN_ENTRY_H

#include <cmath>
#include <iostream>

using namespace std;


class Entry {
private:
    char key;
    int value;
    Entry *next;
public:

    Entry();
    Entry( const Entry &  _entry);
    Entry(char _key, int _value);
    Entry &operator = (Entry const &_entry);
    char getKey() const;

    int getValue() const;

    Entry *getNext() const;

    int hash();

    void setKey(char _key);

    void setValue(int _value);

    void setNext(Entry *_entry);

    friend ostream& operator<<(ostream& os, const Entry& vector);

    friend  istream & operator>>(istream is, Entry &vector);

};


#endif //ALGORITHM_HUFFMAN_ENTRY_H
