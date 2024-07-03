import unittest
from binary_search import binary_search
from linear_search import linear_search


class testSearchin(unittest.TestCase):
    def test_binary_search(self):
        # Test case 1: Target is in the list
        self.assertEqual(linear_search([1, 2, 3, 4, 5], 3), 2)
        # Test case 2: Target is not in the list
        self.assertEqual(linear_search([1, 2, 3, 4, 5], 6), -1)
        # Test case 3: Empty list
        self.assertEqual(linear_search([], 1), -1)
        # Test case 4: Single element list where target is the element
        self.assertEqual(linear_search([1], 1), 0)
        # Test case 5: Single element list where target is not the element
        self.assertEqual(linear_search([1], 2), -1)

    def test_linear_search(self):
        # Test case 1: Target is in the list
        self.assertEqual(binary_search([1, 2, 3, 4, 5], 3), 2)
        # Test case 2: Target is not in the list
        self.assertEqual(binary_search([1, 2, 3, 4, 5], 6), -1)
        # Test case 3: Empty list
        self.assertEqual(binary_search([], 1), -1)
        # Test case 4: Single element list where target is the element
        self.assertEqual(binary_search([1], 1), 0)
        # Test case 5: Single element list where target is not the element
        self.assertEqual(binary_search([1], 2), -1)
        # Test case 6: Large list where target is present
        self.assertEqual(binary_search(list(range(1000000)), 123456), 123456)
        # Test case 7: Large list where target is absent
        self.assertEqual(binary_search(list(range(1000000)), 1000000), -1)


if __name__ == "__main__":
    unittest.main()