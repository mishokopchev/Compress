//
// Created by Mihail on 12/21/2016.
//

#include "HuffmanTree.h"

HashMap *HuffmanTree::getMap() {
    return this->frequentTable;
}

HuffmanTree::HuffmanTree(HashMap *hashMap) {
    this->leafs = new List<Tnode *>();
    this->frequentTable = hashMap;
    this->create();
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

HuffmanTree::HuffmanTree(HashMap &hashMap) {
    this->leafs = new List<Tnode *>();
    this->frequentTable = &hashMap;
    //this->setLeafs();
    this->create();
}

void HuffmanTree::create() {

}

void HuffmanTree::setLeafs() {
    Entry **table = frequentTable->getTable();
    for (int i = 0; i < TABLE_SIZE; ++i) {
        if (table[i] != nullptr) {
            Tnode *tnode = new Tnode(table[i]);
            this->leafs->add(tnode);
        }
    }
    std::cout << "broi " << leafs->getCurrentSize() << std::endl;
    leafs->print();
}

Tnode *HuffmanTree::findMinimumEntry() {

    int index = 0, minimumEntry = 1000000000;
    int leafsCurrentSize = this->leafs->getCurrentSize();

    for (int i = 0; i < leafsCurrentSize; ++i) {
        Tnode *tnode = this->leafs->get(i);
        int entry_value = tnode->getEntry()->getValue();
        if (minimumEntry > entry_value) {
            index = i;
            minimumEntry = entry_value;
        }
    }
    Tnode *resultNode =
            this->leafs->get(index);
    this->leafs->remove(index);

    return resultNode;

}

List<Tnode *> *HuffmanTree::getLeafs() {
    return this->leafs;
}
