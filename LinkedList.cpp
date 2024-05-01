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

    Node* temp = head;

    if (head->data == target) {
        head = temp->link;
        delete temp;
        return true;
    }

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

    Node* next = deleted->link;
    temp->link = next;
    delete deleted;
    return true;
}
