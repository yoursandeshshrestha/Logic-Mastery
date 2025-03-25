def find_longest_word(sentence):
    words = sentence.split()
    longest_word = ''
    for word in words:
        if len(word) > len(longest_word):
            longest_word = word
    return longest_word

sentence = "Find the longest word in a string"
print(find_longest_word(sentence))  
