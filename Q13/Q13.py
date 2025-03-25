# Count the number of vowels in a string.

def count_vowels(s: str) -> int:
    vowels = "aeiouAEIOU"
    count = 0
    for char in s:
        if char in vowels:
            count += 1
    return count

input_str= "Hello World!"
print(count_vowels(input_str))
