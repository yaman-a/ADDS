#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list) {
    qSort(list, 0, list.size() - 1);
    return list;
}

void QuickSort::qSort(std::vector<int>& list, int low, int high) {
    if (low < high) {
        int part = partition(list, low, high);

        qSort(list, low, part - 1);
        qSort(list, part + 1, high);
    }
}

int QuickSort::partition(std::vector<int>& list, int low, int high) {
    int pivot = list[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (list[j] <= pivot) {
            i++;
            std::swap(list[i],list[j]);
        }
    }

    std::swap(list[i+1], list[high]);
    return i + 1;
}