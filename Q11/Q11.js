// Convert Celsius to Fahrenheit and vice versa.
function celsiusToFahrenheit(celsius) {
    return (celsius * 9) / 5 + 32;
}
function fahrenheitToCelsius(fahrenheit) {
    return ((fahrenheit - 32) * 5) / 9;
}
var celsius = 25;
var fahrenheit = 77;
console.log("".concat(celsius, "\u00B0C is ").concat(celsiusToFahrenheit(celsius), "\u00B0F"));
console.log("".concat(fahrenheit, "\u00B0F is ").concat(fahrenheitToCelsius(fahrenheit), "\u00B0C"));
