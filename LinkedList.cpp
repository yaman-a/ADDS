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

    Node* track1 = head;
    Node* track2 = head;

    int i = 0;
    int j = 0;

    for (int i = 0; i < pos1+pos2; i++) {
        if (i == pos2) {
            break;
        }

        track2 = track2->link;
    }

    int temp = track2->data;
    track2->data = track1->data;
    track1->data = temp;

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
