#include "Autocomplete.h"

Autocomplete::Autocomplete(){
    root = new TrieNode();
}

Autocomplete::Autocomplete(TrieNode* R){
    root = R;
}

void Autocomplete::insert(std::string word) {
    TrieNode* curr = root;
    for (int i = 0; i < word.size(); i++) {
        if (!curr->getChild(word[i] - 'a')) {
            TrieNode* newNode = new TrieNode();
            curr->setChild(newNode, word[i] - 'a');
        }
        curr = curr->getChild(word[i] - 'a');
    }
    curr->setEnd(true);
}

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {
    TrieNode* curr = root;
    std::vector<std::string> ans;
    for (int i = 0; i < partialWord.size(); i++) {
        if (!curr->getChild(partialWord[i] - 'a')) {
            return ans;
        }
        curr = curr->getChild(partialWord[i] - 'a');
    }
    std::vector<std::string> suggestion;
    getAllSuggestions(curr, partialWord, suggestion);
    return suggestion;
}

void Autocomplete::getAllSuggestions(TrieNode* node, std::string pre, std::vector<std::string>& ans) {
    if (!node) {
        return;
    }
    if (node->isEnd()) {
        ans.push_back(pre);
    }

    for (int i = 0; i < 26 ; i++) {
        if (node->getChild(i) != NULL) {
            getAllSuggestions(node->getChild(i), pre + char('a' + i), ans);
        }
    }
    return;
}