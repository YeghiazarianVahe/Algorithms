import unittest
import linear_search as ls


class TestLinearSearch(unittest.TestCase):
    def test_found(self):
        vector = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3]
        target = 5
        expected_index = 4
        self.assertEqual(ls.linear_search(vector, target), expected_index)

    def test_not_found(self):
        vector = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3]
        target = 8  # not in the vector
        expected_index = -1
        self.assertEqual(ls.linear_search(vector, target), expected_index)

    def test_empty_vector(self):
        vector = []
        target = 10
        expected_index = -1
        self.assertEqual(ls.linear_search(vector, target), expected_index)

    def test_duplicate_elements(self):
        vector = [2, 2, 2, 2, 2]
        target = 2
        expected_index = 0
        self.assertEqual(ls.linear_search(vector, target), expected_index)


if __name__ == '__main__':
    unittest.main()
