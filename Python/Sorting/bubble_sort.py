from typing import List


def bubble_sort(vector: List[int]) -> List[int]:
    for i in range(len(vector)):
        for j in range(len(vector) - 1):
            if vector[j+1] < vector[j]:
                vector[j+1], vector[j] = vector[j], vector[j+1]
    return vector
