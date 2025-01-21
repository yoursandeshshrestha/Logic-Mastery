from collections import Counter

n = int(input("Enter the size of the array: "))
arr = list(map(int, input("Enter the elements of the array: ").split()))

frequency = Counter(arr)


most_frequent = max(frequency, key=frequency.get)
max_count = frequency[most_frequent]

print(f"The most frequent element is {most_frequent} and it appears {max_count} times.")
