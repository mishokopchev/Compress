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
#include "List.hpp"

class HuffmanTree {
private:

    Tnode *root;
    HashMap *frequentTable;
    List<Tnode *> *leafs;

public:

    List<Tnode *> *getLeafs();

    void setRoot(Tnode *root);

    Tnode *getRoot();

    void setMap(HashMap &map);

    HashMap *getMap();

    HuffmanTree(HashMap &hashMap);

    HuffmanTree(HashMap *hashMap);

    void setLeafs();

    Tnode *findMinimumEntry();

    void create();

    void setCodes(Tnode *node);

};


#endif //ALGORITHM_HUFFMAN_HUFFMANTREE_H
