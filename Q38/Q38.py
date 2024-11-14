#Implement the binary searchh on a sorted array
arr = [2, 3, 4, 10, 40]
target = 10
left, right = 0, len(arr) - 1

while left <= right:
    mid = (left + right) // 2

    if arr[mid] == target:
        print(f"Element found at index {mid}")
        break
    elif arr[mid] < target:
        left = mid + 1
    else:
        right = mid - 1
else:
    print("Element not found in the array")
