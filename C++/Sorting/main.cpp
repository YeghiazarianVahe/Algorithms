#include <iostream>
#include <vector>
#include <cassert>
#include "sorting.h"

void test_sorting_algorithms() {
    // Test cases
    std::vector<int> test_vector1 = { 12, 11, 13, 5, 6, 7 };
    std::vector<int> test_vector2 = { 4, 3, 2, 10, 12, 1, 5, 6 };
    std::vector<int> sorted_vector1 = { 5, 6, 7, 11, 12, 13 };
    std::vector<int> sorted_vector2 = { 1, 2, 3, 4, 5, 6, 10, 12 };

    // Bubble Sort
    std::vector<int> bubble_sorted_vector1 = test_vector1;
    bubble_sort(bubble_sorted_vector1);
    assert(bubble_sorted_vector1 == sorted_vector1);

    std::vector<int> bubble_sorted_vector2 = test_vector2;
    bubble_sort(bubble_sorted_vector2);
    assert(bubble_sorted_vector2 == sorted_vector2);

    // Insertion Sort
    std::vector<int> insertion_sorted_vector1 = test_vector1;
    insertion_sort(insertion_sorted_vector1);
    assert(insertion_sorted_vector1 == sorted_vector1);

    std::vector<int> insertion_sorted_vector2 = test_vector2;
    insertion_sort(insertion_sorted_vector2);
    assert(insertion_sorted_vector2 == sorted_vector2);

    // Merge Sort
    std::vector<int> merge_sorted_vector1 = test_vector1;
    merge_sort(merge_sorted_vector1, 0, merge_sorted_vector1.size() - 1);
    assert(merge_sorted_vector1 == sorted_vector1);

    std::vector<int> merge_sorted_vector2 = test_vector2;
    merge_sort(merge_sorted_vector2, 0, merge_sorted_vector2.size() - 1);
    assert(merge_sorted_vector2 == sorted_vector2);

    // Quick Sort
    std::vector<int> quick_sorted_vector1 = test_vector1;
    quick_sort(quick_sorted_vector1, 0, quick_sorted_vector1.size() - 1);
    assert(quick_sorted_vector1 == sorted_vector1);

    std::vector<int> quick_sorted_vector2 = test_vector2;
    quick_sort(quick_sorted_vector2, 0, quick_sorted_vector2.size() - 1);
    assert(quick_sorted_vector2 == sorted_vector2);

    // Selection Sort
    std::vector<int> selection_sorted_vector1 = test_vector1;
    selection_sort(selection_sorted_vector1);
    assert(selection_sorted_vector1 == sorted_vector1);

    std::vector<int> selection_sorted_vector2 = test_vector2;
    selection_sort(selection_sorted_vector2);
    assert(selection_sorted_vector2 == sorted_vector2);
}

int main() {
    test_sorting_algorithms();
    std::cout << "All sorting algorithm tests passed!" << std::endl;
    return 0;
}
