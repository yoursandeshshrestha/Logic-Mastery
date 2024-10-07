/*program to count the character in the string*/
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char mystring[100], ch;
    int count = 0;

    cout << "Enter a string: ";
    cin >> mystring;  

    cout << "Enter the character to count: ";
    cin >> ch;

  
    for (int i = 0; i < strlen(mystring); i++) {
        if (mystring[i] == ch) {
            count++;
        }
    }

    cout << "The character '" << ch << "' appears " << count << " times in the string." << endl;

    return 0;
}
