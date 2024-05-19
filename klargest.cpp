#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>

#include "Heap.tpp"

int kth_largest(std::vector<int> values, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;

    for (int i : values) {
        if (min_heap.size() < k) {
            min_heap.push(i);
        } else if (i > min_heap.top()) {
            min_heap.pop();
            min_heap.push(i);
        }
    }

    return min_heap.top();
}