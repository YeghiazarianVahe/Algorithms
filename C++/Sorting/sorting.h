#pragma once

#ifndef SORTING_ALGORITHMS_H
#define SORTING_ALGORITHMS_H
#include <vector>

void bubble_sort(std::vector<int>& array);
void selection_sort(std::vector<int>& array);
void insertion_sort(std::vector<int>& array);
void merge_sort(std::vector<int>& vector, int left, int right);
void quick_sort(std::vector<int>& vector, int low, int high);

#endif