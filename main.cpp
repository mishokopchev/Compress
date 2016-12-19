
#include "Entry.h"
#include <iostream>
int main() {

    // Node<int,int>* node= new Node<int,int>();
    // std::cout << "Hello, World!" << std::endl;
//    Node<int,int>* node= new Node<int,int>();
    Entry entry = Entry('A', 2);
    std::cout<<entry.hash()<<std::endl;

    Entry entry1 = Entry('q', 2);
    std::cout<<entry1.hash()<<std::endl;

    std::cout<<Entry('2',0).hash();
    return 0;
}