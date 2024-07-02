import unittest
import selection_sort as ssort


class testSelectionSort(unittest.TestCase):
    def test_selection_sort(self):
        # Test case 1: Empty List
        self.assertEqual(ssort.selection_sort([]), [])
        # Test case 2: Already sorted list
        self.assertEqual(ssort.selection_sort([1, 2, 3, 4, 5]), [1, 2, 3, 4, 5])
        # Test case 3: Reverse sorted list
        self.assertEqual(ssort.selection_sort([5, 4, 3, 2, 1]), [1, 2, 3, 4, 5])
        # Test case 4: Unsorted list with duplicates
        self.assertEqual(ssort.selection_sort([3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]), [1, 1, 2, 3, 3, 4, 5, 5, 5, 6, 9])


if __name__ == '__main__':
    unittest.main()
