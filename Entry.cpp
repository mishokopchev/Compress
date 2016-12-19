//
// Created by Mihail on 12/19/2016.
//

#include "Entry.h"


Entry::Entry(char _key, int _value) {
    this->key = _key;
    this->value = _value;
    this->next = nullptr;
}

int Entry::getValue() const {
    return this->value;
}

char Entry::getKey() const {
    return this->key;
}

Entry *Entry::getNext() {
    return this->next;

}
