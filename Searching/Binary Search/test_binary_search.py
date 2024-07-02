import unittest
import binary_search as bs


class TestBinarySearch(unittest.TestCase):
    def test_existing_element(self):
        arr = [1, 3, 5, 7, 9, 11, 13]
        target = 7
        self.assertEqual(bs.binary_search(arr, target), 3)

    def test_non_existing_element(self):
        arr = [1, 3, 5, 7, 9, 11, 13]
        target = 6
        self.assertEqual(bs.binary_search(arr, target), -1)

    def test_empty_array(self):
        arr = []
        target = 5
        self.assertEqual(bs.binary_search(arr, target), -1)

    def test_single_element_array(self):
        arr = [5]
        target = 5
        self.assertEqual(bs.binary_search(arr, target), 0)


if __name__ == '__main__':
    unittest.main()
