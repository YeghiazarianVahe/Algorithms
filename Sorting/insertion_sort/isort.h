/* ******************************

 Insertion Sort
// -> Mechanism: Builds the final sorted array one item at a time, inserting each new element into its proper position within the sorted portion.
// -> Best Case Time Complexity: O(n)
// -> Average and Worst Case Time Complexity: O(n^2)
// -> Space Complexity: O(1)
// -> Stable: Yes

// Insertion sort implemented by Vahe
****************************** */
#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include <vector>

template<typename T>
void insertion_sort(std::vector<T>& arr) {
    for (std::size_t i = 1; i < arr.size(); ++i) {
        T key = arr[i];
        std::size_t j = i;
        while (j > 0 && arr[j - 1] > key) {
            arr[j] = arr[j - 1];
            --j;
        }
        arr[j] = key;
    }
}


#endif

