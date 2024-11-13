/*Check if a number is palindrome or not*/
#include <iostream>
#include <string>
using namespace std;

bool Palindrome(const string& str)
{
    int left = 0;
    int right = str.length() - 1;
    
    while (left < right) 
    {
        if (str[left] != str[right]) 
        {
            return false; 
        }
        left++;
        right--;
    }
    return true; 
}

int main() 
{
    string str;
    
    cout << "Enter a string: ";
    cin >> str; 
    
    if (Palindrome(str)) 
    {
        cout << "The string is a palindrome." << endl;
    } 
    
    else 
    {
        cout << "The string is not a palindrome." << endl;
    }
    
    return 0;
}
