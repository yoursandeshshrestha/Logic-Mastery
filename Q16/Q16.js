//Remove the duplicate in an array
let arr = [1, 2, 3, 2, 4, 5, 5, 6];

console.log("Original Array:", arr);

let n = arr.length;

for (let i = 0; i < n; i++) 
    {
    for (let j = i + 1; j < n; j++) 
        {
        if (arr[i] === arr[j]) 
        {
            arr.splice(j, 1);
            n--;  
            j--;  
        }
    }
}


console.log("Array after removing duplicates:", arr);
