// Return the factorial of a number.

function Factorial(n: number): number {
  if (n === 0 || n === 1) {
    return 1;
  } else {
    return n * Factorial(n - 1);
  }
}

console.log(Factorial(5));
