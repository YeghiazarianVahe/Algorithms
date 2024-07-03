import unittest
from factorial import factorial


class TestFactorial(unittest.TestCase):
    def test_factorial_0(self):
        result = factorial(0)
        self.assertEqual(result, 1)

    def test_factorial_1(self):
        result = factorial(1)
        self.assertEqual(result, 1)

    def test_factorial_positive(self):
        result = factorial(5)
        self.assertEqual(result, 120)

    def test_factorial_large_number(self):
        result = factorial(10)
        self.assertEqual(result, 3628800)

if __name__ == '__main__':
    unittest.main()
