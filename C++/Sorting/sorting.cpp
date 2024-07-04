#include "sorting.h"

void bubble_sort(std::vector<int>& array) {
	std::size_t size = array.size();
	for (size_t i = 0; i < size; ++i){
		for (size_t j = 0; j < size - 1 - i; ++j) {
			if (array[j] > array[j + 1]) {
				std::swap(array[j], array[j + 1]);
			}
		}
	}
};


    void selection_sort(std::vector<int>& vector) {
    for (size_t i = 0; i < vector.size() - 1; ++i) {
        size_t min_idx = i;
        for (size_t j = i + 1; j < vector.size(); ++j) {
            if (vector[j] < vector[min_idx]) {
                min_idx = j;
            }
        }
        std::swap(vector[min_idx], vector[i]);
    }
}

void insertion_sort(std::vector<int>& vector) {
        std::size_t size = vector.size();
        for (size_t i = 1; i < size; ++i) {
            int current_value = vector[i];
            int j = i - 1;
            while (j >= 0 && vector[j] > current_value) {
                vector[j + 1] = vector[j];
                --j;
            }
            vector[j + 1] = current_value;
        }
}

 void merge(std::vector<int>&vector, int left, int mid, int right){
        std::vector<int> left_part(vector.begin() + left, vector.begin() + mid + 1);
        std::vector<int> right_part(vector.begin() + mid + 1, vector.begin() + right + 1);

        int i = 0, j = 0, k = left;
        while (i < left_part.size() && j < right_part.size()) {
            if (left_part[i] <= right_part[j]) {
                vector[k++] = left_part[i++];
            }
            else {
                vector[k++] = right_part[j++];
            }
        }

        while (i < left_part.size()) {
            vector[k++] = left_part[i++];
        }

        while (j < right_part.size()) {
            vector[k++] = right_part[j++];
        }
  }
 
 void merge_sort(std::vector<int>& vector, int left, int right) {
     if (left < right) {
         int mid = left + (right - left) / 2;
         merge_sort(vector, left, mid);
         merge_sort(vector, mid + 1, right);
         merge(vector, left, mid, right);
     }
 }

 int partition(std::vector<int>& vector, int low, int high) {
     int pivot = vector[high];
     int i = low - 1;
     for (int j = low; j < high; ++j) {
         if (vector[j] <= pivot) {
             ++i;
             std::swap(vector[i], vector[j]);
         }
     }
     std::swap(vector[i + 1], vector[high]);
     return i + 1;
 }

 void quick_sort(std::vector<int>& vector, int low, int high) {
     if (low < high) {
         int pi = partition(vector, low, high);
         quick_sort(vector, low, pi - 1);
         quick_sort(vector, pi + 1, high);
     }
 }