//
// Created by Mihail on 12/22/2016.
//

#include "Tnode.h"

Tnode::Tnode(Entry &entry) {
    this->data = &entry;
}

Tnode *Tnode::getLeft() {
    return this->left;
}

Tnode *Tnode::getRight() {
    return this->right;
}

void Tnode::setLeft(Tnode &left) {
    this->left = &left;
}

void Tnode::setRight(Tnode &right) {
    this->right = &right;
}

void Tnode::setEntry(Entry &entry) {
    this->data = &entry;
}

Entry *Tnode::getEntry() {
    return this->data;
}
