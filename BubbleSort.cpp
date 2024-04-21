#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list) {
    int n = list.size();


    // loop to access array
    for (int i = 0; i < n; i++) {
        // loop to access array elements
        for (int j = 0; j < n - i - 1; j++) {
            if (list[j] > list[j + 1]) {
                // swap those elements
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
       } 
    }

    return list;
}