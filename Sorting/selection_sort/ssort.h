/* ******************************

 Selection Sort
// -> Mechanism: Selects the smallest (or largest) element from the unsorted portion of the list and moves it to the end of the sorted portion.
// -> Time Complexity: O(n^2) for all cases
// -> Space Complexity: O(1)
// -> Stable: No (but can be made stable with modifications)

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
