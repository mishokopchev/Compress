//
// Created by Mihail on 12/19/2016.
//

#include "Entry.h"
#include "HashMap.h"

Entry::Entry() {}

Entry::Entry(const Entry &_entry) {
    this->key = _entry.getKey();
    this->value = _entry.getValue();
    this->next = _entry.getNext();

}

ostream &operator<<(ostream &os, const Entry &vector) {
    os << vector.getKey() << " " << vector.getValue() << endl;
    return os;
}

Entry &Entry::operator=(Entry const &_entry) {
    if (this != &_entry) {
        this->key = _entry.getKey();
        this->value = _entry.getValue();
        this->next = _entry.getNext();
    }

    return *this;
}

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

Entry *Entry::getNext() const {
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

istream &operator>>(istream is, Entry &vector) {
    is >> vector.key >> vector.value;
    return is;
}

std::ostream &operator<<(std::ostream &ostream, Entry &entry) {
    ostream << "key: " << entry.getKey() << " value:" << entry.getValue();
    return ostream;

}
