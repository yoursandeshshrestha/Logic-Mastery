/*Capitalize the first letter of every word in a string*/
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void capital(string &str) 
{
    for (size_t i = 0; i < str.length(); i++) 
    {
        if (i == 0 || str[i - 1] == ' ') 
        {
            str[i] = toupper(str[i]);
        }
    }
}

int main() 
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    capital(str);

    cout << "Capitalized String: " << str << endl;

    return 0;
}
