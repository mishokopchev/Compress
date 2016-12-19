//
// Created by Mihail on 12/18/2016.
//

#include "Node.h"

template<typename K, typename V>
Node<K, V>::Node() {
    this->next = new Node<K, V>();
}

template<typename K, typename V>
Node<K, V>::Node(K key, V value, int hash) {
    this->key = key;
    this->value = value;
    this->hash = hash;

}

template<typename K, typename V>
Node<K, V>::Node(K key, V value, int hash, Node<K, V> *next) {
    this->key = key;
    this->value = value;
    this->next = next;
    this->hash = hash;
}

template<typename K, typename V>
K Node<K, V>::getKey() const {
    return this->key;
}

template<typename K, typename V>
V Node<K, V>::getValue() const {
    return this->value;
}