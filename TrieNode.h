#ifndef TRIENODE_H
#define TRIENODE_H

#include <unordered_map>
#include <string>

class TrieNode {
private:
    bool endWord;
    std::unordered_map<char, TrieNode*> children;
    
public:
    TrieNode();
    void insert(std::string& word);
    TrieNode* getNode(char c);
    bool isEndOfWord();
    std::unordered_map<char, TrieNode*>& getChildren();
};

#endif // TRIENODE_H