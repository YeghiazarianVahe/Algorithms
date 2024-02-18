#include "ssort.h"
#include <iostream>

template<typename T>
void printVector(const std::vector<T>& arr) {
    for (const auto& elem : arr) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::vector<int> vec = {64, 25, 12, 22, 11};
    selection_sort(vec);
    std::cout << "Sorted array: ";
    printVector(vec);

    return 0;
}
