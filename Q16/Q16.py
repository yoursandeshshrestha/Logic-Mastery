#Remove duplicate in an array
arr = [1, 2, 3, 2, 4, 5, 5, 6]

print("Original List:", arr)

n = len(arr)

i = 0
while i < n:
    j = i + 1
    while j < n:
        if arr[i] == arr[j]:
           
            arr.pop(j)
            n -= 1  
        else:
            j += 1
    i += 1

print("List after removing duplicates:", arr)
