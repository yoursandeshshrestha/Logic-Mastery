// Generate a multiplication table for a given number

function multiplicationTableTS(num: number): void {
  for (let i = 1; i <= 10; i++) {
    console.log(`${num} * ${i} = ${num * i}`);
  }
}

multiplicationTableTS(5);
