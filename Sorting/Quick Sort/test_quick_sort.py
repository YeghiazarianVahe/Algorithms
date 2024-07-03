import unittest
import quick_sort as qsort


class testQuickSort(unittest.TestCase):
    def test_selection_sort(self):
        # Test case 1: Normal case with distinct integers
        self.assertEqual(qsort.quick_sort([3, 6, 8, 10, 1, 2, 1]), [1, 1, 2, 3, 6, 8, 10])
        # Test case 2: Already sorted array
        self.assertEqual(qsort.quick_sort([1, 2, 3, 4, 5]), [1, 2, 3, 4, 5])
        # Test case 3: Reverse sorted array
        self.assertEqual(qsort.quick_sort([5, 4, 3, 2, 1]), [1, 2, 3, 4, 5])
        # Test case 4: Array with duplicate elements
        self.assertEqual(qsort.quick_sort([3, 3, 3, 3, 3]), [3, 3, 3, 3, 3])
        # Test case 5: Array with negative and positive integers
        self.assertEqual(qsort.quick_sort([3, -2, -1, 0, 2, 1]), [-2, -1, 0, 1, 2, 3])
        # Test case 6: Empty array
        self.assertEqual(qsort.quick_sort([]), [])
        # Test case 7: Single element array
        self.assertEqual(qsort.quick_sort([1]), [1])


if __name__ == '__main__':
    unittest.main()
