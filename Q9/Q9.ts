// Determine if a number is prime.

function checkPrimeTS(num: number) {
  if (num % 2 == 0) {
    console.log(`${num} is even`);
  } else {
    console.log(`${num} is odd`);
  }
}

checkPrimeTS(20);
checkPrimeTS(1);
