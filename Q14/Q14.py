# Find the maximum and minimum numbers in an array.

def find_max_min(arr):
    if len(arr) == 0:
        raise ValueError("Array is empty")

    max_num = arr[0]
    min_num = arr[0]

    for num in arr[1:]:
        if num > max_num:
            max_num = num
        if num < min_num:
            min_num = num

    return max_num, min_num

numbers = [10, 45, 32, 67, 23, 12, 5]
print(find_max_min(numbers))  # Output: (67, 5)
