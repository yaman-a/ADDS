#include "Node.h"

Node::Node(int val) {
    data = val;
    link = nullptr;
}

int Node::getData() {
    return data;
}

Node* Node::getLink() {
    return link;
}

void Node::setLink(Node* next) {
    link = next;
}
