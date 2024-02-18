/* ******************************
 Bubble Sort
// -> Mechanism: Repeatedly swaps adjacent elements if they are in the wrong order.
// -> Best Case Time Complexity: O(n)
// -> Average and Worst Case Time Complexity: O(n^2)
// -> Space Complexity: O(1)
// -> Stable: Yes

// Bubble sort implemented by Vahe
****************************** */
#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <vector>

template<typename T>
void bubble_sort(std::vector<T>& arr) {
    std::size_t n = arr.size();
    bool swapped;
    for (std::size_t i = 0; i < n - 1; ++i) {
        swapped = false;
        for (std::size_t j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
        if(!swapped){
            break;
        }
    }
}

#endif

