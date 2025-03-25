//  Implement quicksort

function quicksort(arr) {
  if (arr.length <= 1) {
    return arr;
  }
  const pivot = arr[Math.floor(arr.length / 2)];
  const left = arr.filter((x) => x < pivot);
  const middle = arr.filter((x) => x === pivot);
  const right = arr.filter((x) => x > pivot);
  return [...quicksort(left), ...middle, ...quicksort(right)];
}

const array = [10, 7, 8, 9, 1, 5];
const sortedArray = quicksort(array);
console.log("Sorted Array:", sortedArray);
