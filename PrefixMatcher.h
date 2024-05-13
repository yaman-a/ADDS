#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H


#include <vector>
#include <string>

#include "Autocomplete.h"

class PrefixMatcher {
private:
    TrieNode* root;
public:
    PrefixMatcher();
    int selectRouter(std::string networkAddress);
    void insert(std::string address, int routerNumber);
};

#endif // PREFIXMATCHER_H
