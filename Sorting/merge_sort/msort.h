/* ******************************

 Insertion Sort
// -> Mechanism: Divides the array into halves, sorts each half, and then merges them back together.
// -> Time Complexity: O(nlogn) for all cases
// -> Space Complexity: O(n)
// -> Stable: Yes

// Insertion sort implemented by Vahe
****************************** */
#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <vector>
template<typename T>
void merge(std::vector<T>& arr, std::vector<T>& left, std::vector<T>& right) {
    int i = 0, j = 0, k = 0;
    int nL = left.size();
    int nR = right.size();

    while (i < nL && j < nR) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    while (i < nL) {
        arr[k++] = left[i++];
    }

    while (j < nR) {
        arr[k++] = right[j++];
    }
}

template<typename T>
void mergeSort(std::vector<T>& arr) {
    int n = arr.size();
    if (n < 2) return;

    int mid = n / 2;
    std::vector<T> left(mid);
    std::vector<T> right(n - mid);

    for (int i = 0; i < mid; ++i) {
        left[i] = arr[i];
    }
    for (int i = mid; i < n; ++i) {
        right[i - mid] = arr[i];
    }

    mergeSort(left);
    mergeSort(right);
    merge(arr, left, right);
}

#endif

