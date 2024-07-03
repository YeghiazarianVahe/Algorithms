from typing import List


def selection_sort(vector: List[int]) -> List[int]:
    for i in range(len(vector)):
        min_idx: int = i
        for j in range(i + 1, len(vector)):
            if vector[min_idx] > vector[j]:
                vector[min_idx], vector[j] = vector[j], vector[min_idx]
    return vector
