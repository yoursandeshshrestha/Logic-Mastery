// Determine if a number is prime.
function checkPrime(num) {
    if (num % 2 == 0) {
        console.log("".concat(num, " is even"));
    }
    else {
        console.log("".concat(num, " is odd"));
    }
}
checkPrime(20);
checkPrime(1);
