// Convert Celsius to Fahrenheit and vice versa.

function celsiusToFahrenheitTS(celsius: number): number {
  return (celsius * 9) / 5 + 32;
}

function fahrenheitToCelsiusTS(fahrenheit: number): number {
  return ((fahrenheit - 32) * 5) / 9;
}

const celsiusTS = 25;
const fahrenheitTS = 77;

console.log(`${celsiusTS}°C is ${celsiusToFahrenheitTS(celsiusTS)}°F`);
console.log(`${fahrenheitTS}°F is ${fahrenheitToCelsiusTS(fahrenheitTS)}°C`);
