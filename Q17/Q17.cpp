/*Check if two strings are anagrams.*/
#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char str1[100], str2[100];
    int count[256] = {0}; 

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    
    if (strlen(str1) != strlen(str2)) 
    {
        cout << "The strings are not anagrams." << endl;
        return 0;
    }

    
    for (int i = 0; str1[i] != '\0'; i++) 
    {
        count[(unsigned char)str1[i]]++; 
        count[(unsigned char)str2[i]]--; 
    }

   
    for (int i = 0; i < 256; i++) 
    {
        if (count[i] != 0) 
        {
            cout << "The strings are not anagrams." << endl;
            return 0;
        }
    }

    cout << "The strings are anagrams." << endl;
    return 0;
}
