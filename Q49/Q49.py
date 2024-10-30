# Find the smallest missing positive integer in an array.

def first_missing_positive(nums):
    n = len(nums)
    
    for i in range(n):
        while 1 <= nums[i] <= n and nums[nums[i] - 1] != nums[i]:
            nums[nums[i] - 1], nums[i] = nums[i], nums[nums[i] - 1]

    for i in range(n):
        if nums[i] != i + 1:
            return i + 1

    return n + 1

# Example
print(first_missing_positive([3, 4, -1, 1]))  # Output: 2
