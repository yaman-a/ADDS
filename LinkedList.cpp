#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
	head = nullptr;
}

LinkedList::~LinkedList() {
	while (head != nullptr) {
		deleteFront();
	}
}

void LinkedList::insertFront(int item) {
	Node* newNode = new Node(item, head);
	head = newNode;
}

void LinkedList::deleteFront() {
	if(head != nullptr) {
		Node* oldHead = head;
		head = head->link;
		delete oldHead;
	}
}

void LinkedList::printList() {
	Node* currNode = head;
	while(currNode != nullptr) {
		std::cout << currNode->data << " ";
		currNode = currNode->link;
	}
}

/////////// your code goes here... DO NOT change the function signatures ///////////

bool LinkedList::swap(int pos1, int pos2) {
    
    Node* temp1 = head;
    Node* node1 = temp1;

    int n1 = 0;

    // find which node is in pos1
    // then keep track of it and the one before it

    if (pos1 == 0) {
        node1 = head;
        temp1 = node1;
    } else {
        while (temp1 != nullptr) {
            if (n1 == pos1) {
                node1 = temp1->link;
                break;
            }

            temp1 = temp1->link;
            n1++;
        }
    }

    Node* temp2 = head;
    Node* node2 = temp2;

    int n2 = 0;

    // same thing with pos2

    if (pos2 == 0) {
        node2 = head;
        temp2 = node2;
    } else {
        while (temp1 != nullptr) {
            if (n2 == pos2) {
                node1 = temp2->link;
                break;
            }

            temp2 = temp2->link;
            n2++;
        }
    }

    // perform swap operation

    Node* new1 = node2;
    Node* new2 = node1;

    temp1->link = new1;
    new1->link = node1->link;

    temp2->link = new2;
    new2->link = node2->link;

    return true;
    


}

bool LinkedList::find_and_delete(int target) {
    if (head == nullptr) {
        return false;
    }

    // temporary tracker

    Node* temp = head;

    // if we are deleting the head, we just delete it and set next one as head

    if (head->data == target) {
        head = temp->link;
        delete temp;
        return true;
    }

    // keep track of node to delete and the one before it

    Node* deleted = temp;

    while (temp != nullptr) {
        if (temp->link == nullptr) {
            return false;
        }
        if (temp->link->data == target) {
            deleted = temp->link;
            break;
        }
        temp = temp->link;
    }

    // delete node and join the previous one with the next one

    Node* next = deleted->link;
    temp->link = next;
    delete deleted;
    return true;
}
