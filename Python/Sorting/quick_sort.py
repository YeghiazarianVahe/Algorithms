from typing import List


def quick_sort(vector: List[int]) -> List[int]:
    if len(vector) < 2:
        return vector
    pivot: int = vector[0]
    smaller: List[int] = [item for item in vector[1:] if item < pivot]
    equals: List[int] = [item for item in vector[1:] if item == pivot]
    greater: List[int] = [item for item in vector[1:] if item > pivot]
    return quick_sort(smaller) + [pivot] + equals + quick_sort(greater)
