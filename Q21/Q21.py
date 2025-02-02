# Rotate an array by k positions.

def rotate_array(arr, k):
    k = k % len(arr)  
    return arr[-k:] + arr[:-k]

print(rotate_array([1, 2, 3, 4, 5], 2))  
