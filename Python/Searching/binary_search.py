from typing import List


def binary_search(vector: List[int], target: int) -> int:
    start: int = 0
    end: int = len(vector) - 1
    while start <= end:
        mid: int = start + (end - start) // 2
        if vector[mid] == target:
            return mid
        if vector[mid] > target:
            end = mid - 1
        if vector[mid] < target:
            start = start + 1
    return -1
