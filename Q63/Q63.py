# Implement quicksort

def quicksort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quicksort(left) + middle + quicksort(right)

array = [10, 7, 8, 9, 1, 5]
sorted_array = quicksort(array)
print("Sorted Array:", sorted_array)
