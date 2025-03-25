// Rotate an array by k positions.

function rotateArrayTS<T>(arr: T[], k: number): T[] {
  k = k % arr.length;
  return [...arr.slice(-k), ...arr.slice(0, -k)];
}

console.log(rotateArrayTS([1, 2, 3, 4, 5], 2));
