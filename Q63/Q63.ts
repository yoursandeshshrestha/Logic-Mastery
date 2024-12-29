//  Implement quicksort

function quicksortInPlace(arr: number[], low: number, high: number): void {
  if (low < high) {
    const partitionIndex = partition(arr, low, high);
    quicksortInPlace(arr, low, partitionIndex - 1);
    quicksortInPlace(arr, partitionIndex + 1, high);
  }
}

function partition(arr: number[], low: number, high: number): number {
  const pivot = arr[high];
  let i = low - 1;

  for (let j = low; j < high; j++) {
    if (arr[j] < pivot) {
      i++;
      [arr[i], arr[j]] = [arr[j], arr[i]];
    }
  }
  [arr[i + 1], arr[high]] = [arr[high], arr[i + 1]];
  return i + 1;
}

const array_one = [10, 7, 8, 9, 1, 5];
quicksortInPlace(array_one, 0, array_one.length - 1);
console.log("Sorted Array:", array_one);
