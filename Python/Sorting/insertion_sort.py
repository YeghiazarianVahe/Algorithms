from typing import List


def insertion_sort(vector: List[int]) -> List[int]:
    for i in range(1, len(vector)):
        current_value: int = vector[i]
        position: int = i
        while position > 0 and vector[position - 1] > current_value:
            vector[position] = vector[position - 1]
            position -= 1
        vector[position] = current_value
    return vector
