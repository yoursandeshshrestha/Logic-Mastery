// Sum all elements in an array.

const testArrayts = [5, 10, 15, 20];

function sumAllTs(arr) {
  return arr.reduce((pre, cur) => {
    pre + cur;
  });
}

console.log(sumAllTs(testArrayts));
