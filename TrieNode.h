#ifndef TRIENODE_H
#define TRIENODE_H

#include <unordered_map>
#include <string>

class TrieNode {
private:
    bool endOfWord;
    TrieNode* children[26];
    int rNum;

public:
    TrieNode();
    TrieNode* getChild(int i);
    void setChild(TrieNode* node, int i);
    bool isEnd();
    void setEnd(int n);
    void setRouter(int i);
    int getRouter();
};

#endif // TRIENODE_H