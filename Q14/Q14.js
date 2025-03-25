// Find the maximum and minimum numbers in an array.
function findMaxMin(arr) {
    if (arr.length === 0)
        throw new Error("Array is empty");
    var max = arr[0];
    var min = arr[0];
    for (var i = 1; i < arr.length; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return { max: max, min: min };
}
var numbers = [10, 45, 32, 67, 23, 12, 5];
console.log(findMaxMin(numbers));
