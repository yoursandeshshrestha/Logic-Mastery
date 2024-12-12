#Capitalize the first letter of every word in a string.
def capitalize_words(string):
    return ' '.join(word.capitalize() for word in string.split())

string = input("Enter a string: ")
result = capitalize_words(string)

print("Capitalized String:", result)
