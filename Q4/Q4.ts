// Reverse a string.

function ReverseString(string: string) {
  return string.split("").reverse().join("");
}

console.log(ReverseString("Hello World "));
