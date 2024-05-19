#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>

int kth_largest(std::vector<int> values, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;

    for (int i = 0; i < values.size(); i++) {
        min_heap.push(values[i]);
    }

    for (int i = 0; i < (min_heap.size() - k); i++) {
        min_heap.pop();
    }

    return min_heap.top();
}