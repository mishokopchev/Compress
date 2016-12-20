
#include "Entry.h"
#include "HashMap.h"

int main() {

    // Node<int,int>* node= new Node<int,int>();
    // std::cout << "Hello, World!" << std::endl;
//    Node<int,int>* node= new Node<int,int>();
//    Entry entry = Entry('A', 2);
 //   std::cout << entry.hash() << std::endl;
    //Entry entry1 = Entry('q', 2);
    //std::cout << entry1.hash() << std::endl;

    //std::cout << Entry('2', 0).hash() << std::endl;

    HashMap *map = new HashMap();

    map->put('g',3);
    map->put('b',10);
    map->put('b',10);
    map->put('b',10);
    map->put('A',10);

    std::cout<<map->get('g')<<std::endl;
    std::cout<<map->get('b')<<std::endl;
    std::cout<<map->get('A')<<std::endl;
    std::cout<<map->containsKey('A')<<std::endl;
    std::cout<<map->containsKey('w')<<std::endl;

    //std::cout<<map->get('A')<<std::endl;

    return 0;
}