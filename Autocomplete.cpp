#include "Autocomplete.h"

Autocomplete::Autocomplete() : root(new TrieNode()) {}

Autocomplete::Autocomplete(TrieNode* R) {
    root = R;
}

void Autocomplete::insert(std::string& word) {
    root->insert(word);
}

std::vector<std::string> Autocomplete::getSuggestions(std::string& partialWord) {
    std::vector<std::string> suggestions;
    TrieNode* current = root;

    for (char c : partialWord) {
        current = current->getNode(c);
        if (!current) {
            return suggestions;
        }
    }

    getAllSuggestions(current, partialWord, suggestions);

    return suggestions;
}

void Autocomplete::getAllSuggestions(TrieNode* node, const std::string& prefix, std::vector<std::string>& suggestions) {
    if (node->isEndOfWord()) {
        suggestions.push_back(prefix);
    }

    for (auto& pair : node->getChildren()) {
        char c = pair.first;
        TrieNode* child = pair.second;
        getAllSuggestions(child, prefix + c, suggestions);
    }
}