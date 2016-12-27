//
// Created by Mihail on 12/25/2016.
//

#ifndef ALGORITHM_HUFFMAN_LIST_HPP
#define ALGORITHM_HUFFMAN_LIST_HPP

#include <iostream>

const int DEFAULT_SIZE = 10;

template<class T>
class List {
private:
    T *data;
    int size;
    int current;

public:
    List();

    ~List();

    int getSize();

    bool isFull();

    bool isEmpty();

    bool add(T elem);

    void resize();

    void remove(int);

    void print();

    int getCurrentSize();

    T get(int);
};

template<typename T>
T List<T>::get(int index) {
    return this->data[index];
}

//does not work
template<typename T>
void List<T>::print() {
    for (int i = 0; i <= this->current; ++i) {
        if (data[i] != nullptr) {
            std::cout << *data[i] << std::endl;
        }
    }
}

template<typename T>
void List<T>::remove(int index) {
    for (int i = index; i < current; ++i) {
        this->data[i] = this->data[i + 1];
    }
    --current;
}

template<typename T>
List<T>::List() {
    this->data = new T[DEFAULT_SIZE];
    this->size = DEFAULT_SIZE;
    this->current = -1;

    for (int i = 0; i < DEFAULT_SIZE; ++i) {
//        this->data[i] = nullptr;
    }
}

template<typename T>
int List<T>::getCurrentSize() {
    return this->current;
}

template<typename T>
List<T>::~List() {
    for (int i = 0; i < this->current; ++i) {
        delete this->data[i];
    }
    delete[] this->data;
}

template<typename T>
int List<T>::getSize() {
    return this->size;
}

template<typename T>
bool List<T>::add(T elem) {

    if (this->isFull()) {
        this->resize();
    }

    this->data[++current] = elem;
}

template<typename T>
bool List<T>::isEmpty() {
    return this->current == -1;
}

template<typename T>
bool List<T>::isFull() {
    return this->current == this->size - 1;
}

template<typename T>
void List<T>::resize() {
    int oldCapacity = this->current;
    int newCapacity = oldCapacity * 2;

    this->size = newCapacity;

    T *newData = new T[newCapacity];

    for (int i = 0; i < oldCapacity; ++i) {
        newData[i] = this->data[i];
    }

    delete[] data;
    this->data = newData;
}


#endif //ALGORITHM_HUFFMAN_LIST_HPP
