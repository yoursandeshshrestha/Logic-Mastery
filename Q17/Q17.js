//Check if the two strings are anagrams
let str1 = prompt("Enter the first string:");
let str2 = prompt("Enter the second string:");

if (str1.length !== str2.length) 
{
  console.log("The strings are not anagrams.");
} 

else 
{
  
  let count = Array(256).fill(0); 

  for (let i = 0; i < str1.length; i++) 
{
    count[str1.charCodeAt(i)]++; 
    count[str2.charCodeAt(i)]--; 
}


  let Anagram = count.every(c => c === 0);

  if (Anagram) 
{
    console.log("The strings are anagrams.");
} 

else 
{
    console.log("The strings are not anagrams.");
  }
}
