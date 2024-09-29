// Count the number of vowels in a string.
function countVowels(str) {
    var vowels = "aeiouAEIOU";
    var count = 0;
    for (var _i = 0, str_1 = str; _i < str_1.length; _i++) {
        var char = str_1[_i];
        if (vowels.includes(char)) {
            count++;
        }
    }
    return count;
}
// Example usage
var inputStr = "Hello World!";
console.log(countVowels(inputStr)); // Output: 3
