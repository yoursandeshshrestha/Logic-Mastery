// Calculate the nth Fibonacci number.

function FibonacciTS(n: number): number {
  if (n <= 1) return n;

  return FibonacciTS(n - 1) + FibonacciTS(n - 2);
}

console.log(FibonacciTS(10));
