//
// Created by Mihail on 12/22/2016.
//

#include "Tnode.h"

Tnode::Tnode(Tnode *left, Tnode *right, Entry *entry) {
    this->left = left;
    this->right = right;
    this->data = entry;
}

ostream &operator<<(ostream &os, const Tnode &vector) {
    os << vector.getEntry()->getKey() << " " << vector.getEntry()->getValue();
    return os;
}

Tnode::Tnode(Entry &entry) {
    this->data = &entry;
    this->left = nullptr;
    this->right = nullptr;
}

Tnode::Tnode(Entry *entry) {
    this->data = entry;
    this->left = nullptr;
    this->right = nullptr;
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

std::string Tnode::getPath() {
    return this->path;
}

void Tnode::setPath(std::string _path) {
    this->path = _path;
}

