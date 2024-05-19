#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>

int kth_largest(std::vector<int> values, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;

    for (int i : values) {
        int size = min_heap.size();
        int top = min_heap.top();
        if (size < k) {
            min_heap.push(i);
        } else if (i > top) {
            min_heap.pop();
            min_heap.push(i);
        }
    }

    return min_heap.top();
}

int main() {
    
}