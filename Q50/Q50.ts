// Find all prime factors of a number. //

function primeFactors(n: number): number[] {
  const factors: number[] = [];
  while (n % 2 === 0) {
    factors.push(2);
    n = Math.floor(n / 2);
  }
  for (let i = 3; i <= Math.sqrt(n); i += 2) {
    while (n % i === 0) {
      factors.push(i);
      n = Math.floor(n / i);
    }
  }
  if (n > 2) {
    factors.push(n);
  }
  return factors;
}

console.log(primeFactors(56));
