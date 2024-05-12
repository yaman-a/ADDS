#include "TrieNode.h"

TrieNode::TrieNode() : endWord(false) {}

void TrieNode::insert(std::string& word) {
    TrieNode* current = this;
    for (char c : word) {
        if (!current->children[c]) {
            current->children[c] = new TrieNode();
        }
        current = current->children[c];
    }
    current->endWord = true;
}

bool TrieNode::isEndOfWord() {
    return endWord;
}

TrieNode* TrieNode::getNode(char c) {
    return children[c];
}

std::unordered_map<char, TrieNode*>& TrieNode::getChildren() {
    return children;
}