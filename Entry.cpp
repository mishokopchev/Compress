//
// Created by Mihail on 12/19/2016.
//

#include "Entry.h"
#include "HashMap.h"


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

int Entry::hash() {
    int hash = 0;
    hash = (hash * 37) + (int) (this->key);
    return hash % TABLE_SIZE;
}

void Entry::setKey(char _key) {
    this->key = _key;
}

void Entry::setNext(Entry *_entry) {
    this->next = _entry;
}

void Entry::setValue(int _value) {
    this->value = _value;

}
//std::ostream& Entry::operator<<(std::ostream &ostream, Entry &entry) {

//}
