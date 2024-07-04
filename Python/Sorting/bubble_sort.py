from typing import List


def bubble_sort(vector: List[int]) -> List[int]:
    for i in range(len(vector)):
        flag: bool = False
        for j in range(len(vector) - 1 - i):
            if vector[j+1] < vector[j]:
                flag = True
                vector[j+1], vector[j] = vector[j], vector[j+1]

        if not flag:
            break
    return vector
