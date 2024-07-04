from typing import List


def selection_sort(vector: List[int]) -> List[int]:
    n = len(vector)
    for i in range(n):
        min_idx = i
        for j in range(i + 1, n):
            if vector[j] < vector[min_idx]:
                min_idx = j
        vector[i], vector[min_idx] = vector[min_idx], vector[i]
    return vector
