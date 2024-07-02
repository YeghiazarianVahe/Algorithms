from typing import List


def linear_search(vector: List[int], target: int) -> int:
    for idx, item in enumerate(vector):
        if item == target:
            return idx
    return -1
