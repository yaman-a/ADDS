#include "TrieNode.h"

TrieNode::TrieNode() {
    endOfWord = false;
    children[26] = { NULL };
}

TrieNode* TrieNode::getChild(int i) {
    return children[i];
}

void TrieNode::setChild(TrieNode* node, int i) {
    children[i] = node;
}

bool TrieNode::isEnd() {
    return endOfWord;
}

void TrieNode::setEnd(int n) {
    endOfWord = n;
}

void TrieNode::setRouter(int i) {
    rNum = i;
}

int TrieNode::getRouter() {
    return rNum;
}