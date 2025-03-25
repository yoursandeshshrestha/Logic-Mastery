// Generate a multiplication table for a given number
function multiplicationTable(num) {
    for (var i = 1; i <= 10; i++) {
        console.log("".concat(num, " * ").concat(i, " = ").concat(num * i));
    }
}
multiplicationTable(5);
