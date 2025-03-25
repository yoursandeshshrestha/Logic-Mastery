// Count the number of occurrences of a character in a string.

function countOccurrences(str: string, char: string): number {
  let count = 0;
  for (let i = 0; i < str.length; i++) {
    if (str[i] === char) {
      count++;
    }
  }
  return count;
}

const str = "hello world";
const char = "l";
console.log(countOccurrences(str, char));
