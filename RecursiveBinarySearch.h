#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <iostream>
#include <vector>

class RecursiveBinarySearch {
    private:
    bool binary(std::vector<int>& list, int n, int low, int high);

    public:
    bool search(std::vector<int>& list, int n);
};

#endif // RECURSIVEBINARYSEARCH_H
