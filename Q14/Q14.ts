// Find the maximum and minimum numbers in an array.

function findMaxMinTS(arr: number[]): { max: number; min: number } {
  if (arr.length === 0) throw new Error("Array is empty");

  let max = arr[0];
  let min = arr[0];

  for (let i = 1; i < arr.length; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return { max, min };
}

const numbers = [10, 45, 32, 67, 23, 12, 5];
console.log(findMaxMinTS(numbers));
