# Check if a string is a palindrome.

def checkPalindrome(s: str):
    checkStr = s[::-1]
    if s == checkStr:
        print(f"{s} is a palindrome")
    else:
        print(f"{s} is not a palindrome")

checkPalindrome("sister")
checkPalindrome("madam")