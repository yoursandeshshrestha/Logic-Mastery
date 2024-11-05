// Perform matrix multiplication.

function multiplyMatrices(
  matrixA: number[][],
  matrixB: number[][]
): number[][] | null {
  const rowsA = matrixA.length;
  const colsA = matrixA[0].length;
  const rowsB = matrixB.length;
  const colsB = matrixB[0].length;

  // Check if matrices can be multiplied
  if (colsA !== rowsB) {
    console.error("Matrices cannot be multiplied: incompatible dimensions.");
    return null;
  }

  // Initialize result matrix with zeros
  const result: number[][] = Array(rowsA)
    .fill(0)
    .map(() => Array(colsB).fill(0));

  // Perform multiplication
  for (let i = 0; i < rowsA; i++) {
    for (let j = 0; j < colsB; j++) {
      for (let k = 0; k < colsA; k++) {
        result[i][j] += matrixA[i][k] * matrixB[k][j];
      }
    }
  }

  return result;
}

const matrixA = [
  [1, 2, 3],
  [4, 5, 6],
];
const matrixB = [
  [7, 8],
  [9, 10],
  [11, 12],
];

const result = multiplyMatrices(matrixA, matrixB);
console.log(result);
