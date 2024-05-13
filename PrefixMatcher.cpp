#include "PrefixMatcher.h"

PrefixMatcher::PrefixMatcher() {
    root = new TrieNode();
}

int PrefixMatcher::selectRouter(std::string networkAddress) {
    TrieNode* curr = root;
    int router = -1;
    for (int i = 0; i < networkAddress.size() && curr->getChild(networkAddress[i] - '0'); i++) {
        curr = curr->getChild(networkAddress[i] - '0');
        if (!curr) {
            return -1;
        }
    }
    return curr->getRouter();
}

void PrefixMatcher::insert(std::string address, int routerNumber) {
    TrieNode* curr = root;
    for (int i = 0; i < address.size(); i++) {
        if (!curr->getChild(address[i] - '0')) {
            curr->setChild(new TrieNode(), address[i] - '0');
        }
        curr = curr->getChild(address[i] - '0');
    }
    curr->setEnd(true);
    curr->setRouter(routerNumber);

    return;
}