//
// Created by Mihail on 12/22/2016.
//

#ifndef ALGORITHM_HUFFMAN_TNODE_H
#define ALGORITHM_HUFFMAN_TNODE_H

#include <string>
#include "Entry.h"

class Tnode {
private:

    Entry *data;
    Tnode *left, *right;
    std::string path;//this will be path for setting the binaey code for a entry

public:
    Tnode();

    Tnode(Tnode *left, Tnode *right, Entry *entry);

    Tnode(Entry &entry);

    Tnode(Entry *entry);

    Tnode *getLeft();

    Tnode *getRight();

    Entry *getEntry() const;

    void setEntry(Entry &entry);

    void setLeft(Tnode &left);

    void setRight(Tnode &right);

    friend ostream &operator<<(ostream &os, const Tnode &vector);

    void setPath(std::string path);

    std::string getPath();

};


#endif //ALGORITHM_HUFFMAN_TNODE_H
