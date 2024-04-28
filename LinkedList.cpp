#include "LinkedList.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(int* arr, int n) {
    head = nullptr;
    for (int i = 0; i < n; i++) {
        insertPosition(i + 1, arr[i]);
    }
}

LinkedList::~LinkedList() {
    Node* current = head;
    Node* next;
    while (current != nullptr) {
        next = current->getLink();
        delete current;
        current = next;
    }
}

void LinkedList::insertPosition(int pos, int newNum) {
    Node* newNode = new Node(newNum);
    if (pos <= 1 || head == nullptr) {
        newNode->setLink(head);
        head = newNode;
    } else {
        Node* current = head;
        for (int i = 1; i < pos - 1 && current->getLink() != nullptr; i++) {
            current = current->getLink();
        }
        newNode->setLink(current->getLink());
        current->setLink(newNode);
    }
}

bool LinkedList::deletePosition(int pos) {
    if (head == nullptr || pos <= 0) {
        return false;
    }
    Node* temp = head;
    if (pos == 1) {
        head = temp->getLink();
        delete temp;
        return true;
    }
    for (int i = 1; temp != nullptr && i < pos - 1; i++) {
        temp = temp->getLink();
    }
    if (temp == nullptr || temp->getLink() == nullptr) {
        return false;
    }
    Node* next = temp->getLink()->getLink();
    delete temp->getLink();
    temp->setLink(next);
    return true;
}

int LinkedList::get(int pos) {
    if (head == nullptr || pos <= 0) {
        return std::numeric_limits<int>::max();
    }
    Node* current = head;
    for (int i = 1; i < pos; i++) {
        if (current == nullptr) {
            return std::numeric_limits<int>::max();
        }
        current = current->getLink();
    }
    if (current == nullptr) {
        return std::numeric_limits<int>::max();
    }
    return current->getData();
}

int LinkedList::search(int target) {
    Node* current = head;
    int index = 1;
    while (current != nullptr) {
        if (current->getData() == target) {
            return index;
        }
        current = current->getLink();
        index++;
    }
    return -1;
}

void LinkedList::printList() {
    if (head == nullptr) {
        return;
    }
    Node* current = head;
    std::cout << "[";
    while (current != nullptr) {
        std::cout << current->getData();
        current = current->getLink();
        if (current != nullptr) {
            std::cout << " ";
        }
    }
    std::cout << "]";
}
