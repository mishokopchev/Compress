//
// Created by Mihail on 12/27/2016.
//

#ifndef ALGORITHM_HUFFMAN_NODE_HPP
#define ALGORITHM_HUFFMAN_NODE_HPP


#include "Entry.h"
#include "HashMap.h"

template<typename K, typename V>
class Node {
private:
    K key;
    V value;
    Node<K, V> *next;

public:
    Node();

    Node(K key, V value);

    Node(K key, V value, Node<K, V> *node);

    Node(const Node &node);

    Node &operator=(Node const &_node);

    K getKey() const;

    V getValue() const;

    int hash();

    void setKey(K key);

    void setValue(V value);

    Node<K, V> *getNext() const;
    // template <typename U,template Q>
    //friend ostream &operator<<(ostream &os, const Node<U,Q> &node);
};

template<typename K, typename V>
Node<K,V>::Node(K key, V value, Node<K, V> *node):Node(key, value) {
    this->next = node;
}

template<typename K, typename V>
Node<K, V> *Node<K, V>::getNext() const {
    return this->next;
}

template<typename K, typename V>
Node<K, V>::Node() {

}

template<typename K, typename V>
K Node<K, V>::getKey() const {
    return this->key;
}

template<typename K, typename V>
V Node<K, V>::getValue() const {
    return this->value;
}

template<typename K, typename V>
void Node<K, V>::setKey(K key) {
    this->key = key;
}

template<typename K, typename V>
void Node<K, V>::setValue(V value) {
    this->value = value;
}

template<typename K, typename V>
Node<K, V>::Node(K key, V value) {
    this->value = value;
    this->key = key;
}

template<typename K, typename V>
int Node<K, V>::hash() {
    int hash = 0;
    hash = (hash * 37 + (int) (this->key));
    return hash % TABLE_SIZE;
}

template<typename K, typename V>
Node<K,V> &Node<K,V>::operator=(Node<K,V> const &_node) {
    this->key = _node.value;
    this->value = _node.getValue();
    this->next = _node.getNext();
}

#endif //ALGORITHM_HUFFMAN_NODE_HPP
