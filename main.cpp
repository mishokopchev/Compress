
#include "Entry.h"
#include "HashMap.h"
#include "Tnode.h"
#include <string>

int main() {

    // Node<int,int>* node= new Node<int,int>();
    // std::cout << "Hello, World!" << std::endl;
//    Node<int,int>* node= new Node<int,int>();
    Entry entry = Entry('A', 2);
    //   std::cout << entry.hash() << std::endl;
    //Entry entry1 = Entry('q', 2);
    //std::cout << entry1.hash() << std::endl;

    //std::cout << Entry('2', 0).hash() << std::endl;

    HashMap *map = new HashMap();
    Entry entry1('2',2);
    std::cout<<entry1.getValue()<<std::endl;
    entry1.setValue(12);
    std::cout<<entry1.getValue()<<std::endl;


    map->put('g', 3);
    map->put('b', 10);
    map->put('b', 10);
    map->put('b', 10);
    map->put('A', 10);

    std::cout << map->get('g') << std::endl;
    std::cout << map->get('b') << std::endl;
    std::cout << map->get('A') << std::endl;
    std::cout << map->containsKey('A') << std::endl;
    std::cout << map->containsKey('w') << std::endl;

    Tnode tnode = Tnode(entry);
    std::cout<<tnode.getEntry()<< std::endl;
    tnode.setLeft(tnode);
    std::cout<<tnode.getLeft()<< std::endl;

    std::string input = "321321";
    std::cout<<input[2];

    //std::cout<<map->get('A')<<std::endl;

    return 0;
}