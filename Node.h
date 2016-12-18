//
// Created by Mihail on 12/18/2016.
//

#ifndef ALGORITHM_HUFFMAN_NODE_H
#define ALGORITHM_HUFFMAN_NODE_H

template <typename K,typename V>
class Node {
private:
    K key;
    V value;
    int hash;
    Node<K,V>* next;

public:

    Node();
    Node(K key, V value,int hash);
    Node(K key , V value,int hash, Node<K,V>* next);

    K getKey() const;
    V getValue() const;
    int hashCode();


};


#endif //ALGORITHM_HUFFMAN_NODE_H
