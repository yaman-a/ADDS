#include <iostream>
#include <vector>
#include <sstream>

#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {

    std::vector<int> list;
    int n;
    while (std::cin >> n) {
        list.push_back(n);
        if(std::cin.get() == '\n') {
            break;
        }
    }  
    BubbleSort B;
    RecursiveBinarySearch Rbs;
    list = B.sort(list);
    bool found = Rbs.search(list, 1);

    if (found) {
        std::cout << "true ";
    } else {
        std::cout << "false ";
    }
    
    for (int i : list) {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}