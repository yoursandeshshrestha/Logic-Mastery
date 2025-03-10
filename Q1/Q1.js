//Write a C function to check if a number is even or odd.

function CheckEvenorOdd(number) {
  if (number % 2 === 0) {
    console.log(`${number} is Even`);
  } else {
    console.log(`${number} is Odd`);
  }
}

CheckEvenorOdd(5);
