from typing import List


def merge_sort(vector: List[int]) -> List[int]:
    if len(vector) < 2:
        return vector
    mid: int = len(vector) // 2
    left_part: List[int] = vector[:mid]
    right_part: List[int] = vector[mid:]
    left_part: List[int] = merge_sort(left_part)
    right_part: List[int] = merge_sort(right_part)
    return merge(left_part, right_part)


def merge(left_part: List[int], right_part: List[int]) -> List[int]:
    sorted_vector: List[int] = []
    left_idx: int = 0
    right_idx: int = 0

    while left_idx < len(left_part) and right_idx < len(right_part):
        if left_part[left_idx] <= right_part[right_idx]:
            sorted_vector.append(left_part[left_idx])
            left_idx += 1
        else:
            sorted_vector.append(right_part[right_idx])
            right_idx += 1

    sorted_vector += left_part[left_idx:]
    sorted_vector += right_part[right_idx:]

    return sorted_vector
