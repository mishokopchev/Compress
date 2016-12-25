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
    Tnode * left, *right;
    std::string path;//this will be path for setting the binaey code for a entry


public:

    Tnode(Entry &entry);

    Tnode * getLeft();
    Tnode * getRight();

    Entry * getEntry();
    void setEntry(Entry & entry);

    void setLeft(Tnode & left);
    void setRight(Tnode & right);


};


#endif //ALGORITHM_HUFFMAN_TNODE_H
