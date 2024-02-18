/* ******************************

//Bubble Sort is a straightforward but inefficient sorting algorithm with a best-case time
//complexity of O(n) and both average and worst-case complexities of O(n^2). It works by
//repeatedly swapping adjacent elements that are out of order, effectively
//"bubbling" the highest or lowest elements to their correct positions in each pass.
//Despite its simplicity, its quadratic time complexity makes it impractical for large datasets.

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

