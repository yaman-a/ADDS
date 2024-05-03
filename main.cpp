#include <iostream>

#include "LinkedList.h"
#include "Node.h"


int main() {

    LinkedList L;

    L.insertFront(1);
    L.insertFront(2);
    L.insertFront(3);
    L.insertFront(4);
    L.insertFront(5);

    L.printList();

    std::cout << std::endl;

    bool status = L.find_and_delete(3);

    std::cout << status << std::endl;
    L.printList();




}