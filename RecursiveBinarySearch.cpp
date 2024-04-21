#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int>& list, int n) {
    return binary(list, n, 0, list.size() - 1);
}

bool RecursiveBinarySearch::binary(std::vector<int>& list, int n, int low, int high) {
    if (low > high) {
        return false;
    }

    int mid = low + (high - low) / 2;

    if (list[mid] == n) {
        return true;
    } else if (list[mid] > n) {
        return binary(list, n, low, mid + 1);
    } else {
        return binary(list, n, mid + 1, high);
    }
}