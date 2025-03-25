// Check if a string is a palindrome.

function isPalindrome(str: String) {
  const checkStr = str.split("").reverse().join("");
  if (str == checkStr) {
    console.log(`${str} is palindrome`);
  } else {
    console.log(`${str} is not palindrome`);
  }
}

isPalindrome("zizi");
isPalindrome("azizi");
