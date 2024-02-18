/* ******************************

//Selection Sort is a straightforward sorting algorithm with a time complexity of O(n^2)
//for all cases (best, average, and worst) and a space complexity of O(1), making it
//space-efficient but time-inefficient for large datasets. It works by repeatedly finding
//the minimum element from the unsorted portion of the array and moving it to the
//end of the sorted portion. Despite its simplicity, its quadratic time complexity
//limits its practicality for sorting large arrays.

// Selection sort implemented by Vahe
****************************** */
#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include <vector>

template<typename T>
void selection_sort(std::vector<T>& arr) {
    std::size_t n = arr.size();
    for (std::size_t i = 0; i < n - 1; ++i) {
        std::size_t minIdx = i;
        for (std::size_t j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            std::swap(arr[minIdx], arr[i]);
        }
    }
}

#endif
