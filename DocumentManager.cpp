#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
    if (documentId.find(id) == documentId.end()) {
        documentId[id] = {name, license_limit};
        documentName[name] = id;
    }
}

void DocumentManager::addPatron(int patronID) {
    patrons.insert(patronID);
}

int DocumentManager::search(std::string name) {
    auto i = documentName.find(name);
    return (i != documentName.end()) ? i->second : 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    if (patrons.find(patronID) == patrons.end()) {
        return false;
    }
    auto docIt = documentId.find(docid);
    if (docIt == documentId.end()) {
        return false;
    }
    int license_limit = docIt->second.second;
     if (borrowedCounts[docid] < license_limit) {
        borrowedDocuments[docid].insert(patronID);
        borrowedCounts[docid]++;
        return true;
    }
    return false;
}

void DocumentManager::returnDocument(int docid, int patronID) {
    auto docIt = borrowedDocuments.find(docid);
    if (docIt != borrowedDocuments.end() && docIt->second.erase(patronID) > 0) {
        borrowedCounts[docid]--;
    }
}