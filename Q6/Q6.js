// Sum all elements in an array.

const testArray = [5, 10, 15, 25];

function sumAll(arr) {
  return arr.reduce((acc, val) => acc + val, 0);
}

console.log(sumAll(testArray));
