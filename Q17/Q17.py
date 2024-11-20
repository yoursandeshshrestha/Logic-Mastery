#Check if the two strings are anagrams
str1 = input("Enter the first string: ")
str2 = input("Enter the second string: ")

if len(str1) != len(str2):
    print("The strings are not anagrams.")
else:
    
    count = [0] * 256  

    for char1, char2 in zip(str1, str2):
        count[ord(char1)] += 1 
        count[ord(char2)] -= 1 


    if all(c == 0 for c in count):
        print("The strings are anagrams.")
    
    else:
        print("The strings are not anagrams.")
