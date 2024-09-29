// Count the number of vowels in a string.

function countVowelsTS(str: string): number {
  const vowels = "aeiouAEIOU";
  let count = 0;
  for (let char of str) {
    if (vowels.includes(char)) {
      count++;
    }
  }
  return count;
}

// Example usage
const inputStrTS = "Hello World!";
console.log(countVowelsTS(inputStrTS)); // Output: 3
