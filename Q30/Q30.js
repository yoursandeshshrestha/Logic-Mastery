const arr = [1, 3, 2, 3, 4, 3, 5, 1]; 

let mostFrequent = arr[0];
let maxCount = 0;

for (let i = 0; i < arr.length; i++) 
{
    let count = 0;
    for (let j = 0; j < arr.length; j++) 
    {
        if (arr[i] === arr[j]) 
        {
            count++;
        }
    }
    if (count > maxCount) 
    {
        maxCount = count;
        mostFrequent = arr[i];
    }
}

console.log(`The most frequent element is ${mostFrequent} and it appears ${maxCount} times.`);
