#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <vector>
#include <string>
#include "TrieNode.h"

class Autocomplete {
private:
    TrieNode* root;
public:
    Autocomplete();
    Autocomplete(TrieNode* R);
    void insert(std::string word);
    std::vector<std::string> getSuggestions(std::string partialWord);
    void getAllSuggestions(TrieNode* node, std::string pre, std::vector<std::string>& ans);
};

#endif // AUTOCOMPLETE_H
