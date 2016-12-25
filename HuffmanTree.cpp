//
// Created by Mihail on 12/21/2016.
//

#include "HuffmanTree.h"

HashMap *HuffmanTree::getMap() {
    return this->frequentTable;
}

Tnode *HuffmanTree::getRoot() {
    return this->root;
}

void HuffmanTree::setMap(HashMap &map) {
    this->frequentTable = &map;
}

void HuffmanTree::setRoot(Tnode *root) {
    this->root = root;
}

HuffmanTree::HuffmanTree( HashMap &hashMap) {
    this->frequentTable = &hashMap;
    create();
}

void HuffmanTree::create() {

}
