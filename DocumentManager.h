#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

class DocumentManager {
    private:
    std::unordered_map<int, std::pair<std::string, int>> documentId;
    std::unordered_map<std::string, int> documentName;
    std::unordered_set<int> patrons;
    std::unordered_map<int, std::unordered_set<int>> borrowedDocuments;
    std::unordered_map<int, int> borrowedCounts;

    public:
    void addDocument(std::string name, int id, int license_limit);
    void addPatron(int patronID);
    int search(std::string name);
    bool borrowDocument(int docid, int patronID);
    void returnDocument(int docid, int patronID);
};

#endif // DOCUMENTMANAGER_H
