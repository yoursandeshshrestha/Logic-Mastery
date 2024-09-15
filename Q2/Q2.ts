// Find the largest of three numbers.

// Solution 1
function FindLargest(Num1: number, Num2: number, Num3: number): void {
  if (Num1 > Num2 && Num1 > Num3) {
    console.log(`${Num1} is larger than ${Num2} and ${Num3}`);
  } else if (Num2 > Num1 && Num2 > Num3) {
    console.log(`${Num2} is larger than ${Num1} and ${Num3}`);
  } else {
    console.log(`${Num3} is larger than ${Num1} and ${Num2}`);
  }
}

FindLargest(2, 3, 10);

// Solution 2

function FindLargest2(Num1: number, Num2: number, Num3: number) {
  console.log(Math.max(Num1, Num2, Num3));
}

FindLargest2(10, 20, 30);
