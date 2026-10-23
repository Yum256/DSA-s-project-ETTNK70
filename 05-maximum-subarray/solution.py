"""
Problem: Maximum Subarray
Algorithm: Kadane's Algorithm

Find the contiguous subarray with the largest sum.

Time Complexity: O(n)
Space Complexity: O(1)
"""


def max_subarray(nums):
    current = best = nums[0]

    for num in nums[1:]:
        current = max(num, current + num)
        best = max(best, current)

    return best


if __name__ == "__main__":
    print(max_subarray([-2, 1, -3, 4, -1, 2, 1, -5, 4]))
    print(max_subarray([1, 2, 3, 4]))
