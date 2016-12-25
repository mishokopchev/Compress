//
// Created by Mihail on 12/21/2016.
//

#ifndef ALGORITHM_HUFFMAN_HUFFMANTREE_H
#define ALGORITHM_HUFFMAN_HUFFMANTREE_H

#include <iostream>
#include <string>
#include "Entry.h"
#include "HashMap.h"
#include "Tnode.h"

class HuffmanTree {
private:

    Tnode *root;
    HashMap *frequentTable;

    void create();

public:

    void setRoot(Tnode *root);

    Tnode *getRoot();

    void setMap(HashMap &map);

    HashMap *getMap();

    HuffmanTree( HashMap &hashMap);



};


#endif //ALGORITHM_HUFFMAN_HUFFMANTREE_H
