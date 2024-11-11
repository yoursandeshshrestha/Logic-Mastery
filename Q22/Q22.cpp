/*Check if a number is a power of two.*/
#include <iostream>
using namespace std;

int main() 
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0 && (number & (number - 1)) == 0) 
    {
        cout << number << " is a power of two." << endl;
    } 
    
    else 
    {
        cout << number << " is not a power of two." << endl;
    }

    return 0;
}

