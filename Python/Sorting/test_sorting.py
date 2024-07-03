import unittest
from bubble_sort import bubble_sort
from insertion_sort import insertion_sort
from merge_sort import merge_sort
from quick_sort import quick_sort
from selection_sort import selection_sort


class TestSortingAlgorithms(unittest.TestCase):
    def test_bubble_sort(self):
        # Test case 1: Normal case
        self.assertEqual(bubble_sort([5, 3, 8, 1, 4]), [1, 3, 4, 5, 8])
        # Test case 2: Already sorted
        self.assertEqual(bubble_sort([1, 2, 3, 4, 5]), [1, 2, 3, 4, 5])
        # Test case 3: Reverse sorted
        self.assertEqual(bubble_sort([5, 4, 3, 2, 1]), [1, 2, 3, 4, 5])
        # Test case 4: Empty list
        self.assertEqual(bubble_sort([]), [])

    def test_insertion_sort(self):
        # Test case 1: Normal case
        self.assertEqual(insertion_sort([5, 3, 8, 1, 4]), [1, 3, 4, 5, 8])
        # Test case 2: Already sorted
        self.assertEqual(insertion_sort([1, 2, 3, 4, 5]), [1, 2, 3, 4, 5])
        # Test case 3: Reverse sorted
        self.assertEqual(insertion_sort([5, 4, 3, 2, 1]), [1, 2, 3, 4, 5])
        # Test case 4: Empty list
        self.assertEqual(insertion_sort([]), [])

    def test_merge_sort(self):
        # Test case 1: Normal case
        self.assertEqual(merge_sort([5, 3, 8, 1, 4]), [1, 3, 4, 5, 8])
        # Test case 2: Already sorted
        self.assertEqual(merge_sort([1, 2, 3, 4, 5]), [1, 2, 3, 4, 5])
        # Test case 3: Reverse sorted
        self.assertEqual(merge_sort([5, 4, 3, 2, 1]), [1, 2, 3, 4, 5])
        # Test case 4: Empty list
        self.assertEqual(merge_sort([]), [])

    def test_quick_sort(self):
        # Test case 1: Normal case
        self.assertEqual(quick_sort([5, 3, 8, 1, 4]), [1, 3, 4, 5, 8])
        # Test case 2: Already sorted
        self.assertEqual(quick_sort([1, 2, 3, 4, 5]), [1, 2, 3, 4, 5])
        # Test case 3: Reverse sorted
        self.assertEqual(quick_sort([5, 4, 3, 2, 1]), [1, 2, 3, 4, 5])
        # Test case 4: Empty list
        self.assertEqual(quick_sort([]), [])

    def test_selection_sort(self):
        # Test case 1: Normal case
        self.assertEqual(selection_sort([5, 3, 8, 1, 4]), [1, 3, 4, 5, 8])
        # Test case 2: Already sorted
        self.assertEqual(selection_sort([1, 2, 3, 4, 5]), [1, 2, 3, 4, 5])
        # Test case 3: Reverse sorted
        self.assertEqual(selection_sort([5, 4, 3, 2, 1]), [1, 2, 3, 4, 5])
        # Test case 4: Empty list
        self.assertEqual(selection_sort([]), [])


if __name__ == '__main__':
    unittest.main()
