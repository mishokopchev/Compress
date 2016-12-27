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
    //  this->create();
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

}

void HuffmanTree::create() {

    while (this->leafs->getCurrentSize() > 0) {

        Tnode *leftNode = this->findMinimumEntry();
        Tnode *rightNode = this->findMinimumEntry();

        int integer_value_for_node = leftNode->getEntry()->getValue() + rightNode->getEntry()->getValue();
        Entry *data = new Entry();

        data->setValue(integer_value_for_node);
        Tnode *newNode = new Tnode(leftNode, rightNode, data);

        this->leafs->add(newNode);
    }
    this->root = this->leafs->get(0);
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

    for (int i = 0; i <= leafsCurrentSize; ++i) {
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

void HuffmanTree::printCodes(Tnode *tnode) {

    if (tnode == nullptr) {
        return;
    }
    cout << tnode->getEntry()->getKey() << " path:\t" << tnode->getPath() << '\n';
    printCodes(tnode->getRight());
    printCodes(tnode->getLeft());
}

bool HuffmanTree::isLeaf(Tnode *node) {
    return node->getRight() == nullptr && node->getLeft() == nullptr;
}

void HuffmanTree::setCodes(Tnode *tnode) {
    if (tnode == nullptr) {
        return;
    }
    if (tnode->getLeft() != nullptr) {
        std::string answer = tnode->getPath();
        answer += '0';
        tnode->getLeft()->setPath(answer);
        setCodes(tnode->getLeft());
    }
    if (tnode->getRight() != nullptr) {
        std::string answer = tnode->getPath();
        answer += '1';
        tnode->getRight()->setPath(answer);
        setCodes(tnode->getRight());
    }

}

void HuffmanTree::writeCodes(std::string input) {
    int length = input.length();
    for (int i = 0; i < length; ++i) {

    }
}