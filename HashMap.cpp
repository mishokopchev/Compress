//
// Created by Mihail on 12/19/2016.
//

#include "HashMap.h"


HashMap::HashMap() {
    this->size = 0;
    this->table = new Entry *[TABLE_SIZE];
    for (int i = 0; i < TABLE_SIZE; ++i) {
        this->table[i] = nullptr;

    }

}
Entry** HashMap::getTable() {
    return this->table;
}

int HashMap::getSize() {
    return this->size;
}

bool HashMap::containsKey(char _key) {
    int hash = Entry(_key, 0).hash();
    if (this->table[hash] == nullptr) {
        return false;
    }
    Entry *entry = this->table[hash];
    while (entry->getNext() != nullptr && entry->getKey() != _key) {
        entry = entry->getNext();
    }
    if (entry->getKey() == _key) {
        return true;
    }
    return false;
}

bool HashMap::isEmpty() {
    return this->size == 0;
}

int HashMap::get(char _key) {
    int hash = Entry(_key, 0).hash();
    char no_key = -1;
    if (this->table[hash] == nullptr) {
        return no_key;
    } else {
        Entry *entry = table[hash];
        while (entry != nullptr && entry->getKey() != _key) {
            entry = entry->getNext();
        }
        if (entry == NULL) {
            return -1;
        } else {
            return entry->getValue();
        }

    }
    return no_key;

}

HashMap::~HashMap() {
    for (int index = 0; index < TABLE_SIZE; ++index) {
        if (this->table[index] != nullptr) {
            Entry *prvEntry = nullptr;
            Entry *entry = this->table[index];

            while (entry) {
                prvEntry = entry;
                entry = entry->getNext();
                delete prvEntry;
            }
        }
    }
}


void HashMap::put(Entry &entry) {
    this->put(entry.getKey(), entry.getValue());
}


void HashMap::put(char _key, int _value) {

    int hash = Entry(_key, _value).hash();
    if (this->table[hash] == nullptr) {
        this->table[hash] = new Entry(_key, _value);
    } else {
        Entry *entry = this->table[hash];
        if (entry->getKey() == _key) {
            entry->setValue(entry->getValue() + _value);
            return;
        }

        while (entry->getNext() != nullptr) {
            entry = entry->getNext();
            if (entry->getKey() == _key) {
                entry->setValue(entry->getValue() + 1);
                return;
            }

        }
        entry->setNext(new Entry(_key, _value));

    }
    this->size++;
}

void HashMap::print() {
    for (int i = 0; i < TABLE_SIZE; ++i) {
        if (this->table[i] != nullptr) {
            std::cout << this->table[i]->getKey() << " " << this->table[i]->getValue() << std::endl;
        }
    }
}

void HashMap::create(std::string input) {
    int size = input.size();

    for (int index = 0; index < size; index++) {
        char character = input[index];
        this->put(character, 1);
    }

}
