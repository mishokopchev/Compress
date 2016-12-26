//
// Created by Mihail on 12/22/2016.
//

#include "Tnode.h"

ostream &operator<<(ostream &os, const Tnode &vector) {
    os << vector.getEntry()->getKey()<< " "<<vector.getEntry()->getValue();
    return os;
}

Tnode::Tnode(Entry &entry) {
    this->data = &entry;
}

Tnode::Tnode(Entry *entry) {
    this->data = entry;
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

Entry *Tnode::getEntry() const {
    return this->data;
}
