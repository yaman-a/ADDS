#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <vector>
#include <string>
#include "TrieNode.h"

class Autocomplete {
private:
    TrieNode* root;
    void getAllSuggestions(TrieNode* node, const std::string& prefix, std::vector<std::string>& suggestions);
public:
    Autocomplete();
    Autocomplete(TrieNode* R);
    void insert(std::string& word);
    std::vector<std::string> getSuggestions(std::string& partialWord);
};

#endif // AUTOCOMPLETE_H
