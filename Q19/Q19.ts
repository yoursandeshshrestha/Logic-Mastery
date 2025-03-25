function findLongestWord(str: string): string {
  let words = str.split(" ");
  let longestWord = "";
  for (let word of words) {
    if (word.length > longestWord.length) {
      longestWord = word;
    }
  }
  return longestWord;
}

const sentence = "Find the longest word in a string";
console.log(findLongestWord(sentence));
