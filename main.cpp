#include <iostream>
#include <map>
#include "Node.h"

int main() {


    std::cout << "Hello, World!" << std::endl;
    //Node<int,int> node1;
    //node1 = Node();
    Node<int,int>* node= new Node();
    std::cout<<node->getValue();

    return 0;
}