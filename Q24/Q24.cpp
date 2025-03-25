/*Binary to decimal*/
#include <iostream>
using namespace std;

int main()
{
    int num, decimal = 0, base = 1, last_digit;

    cout << "Enter a binary number: ";
    cin >> num;


    while (num > 0)
    {
        last_digit = num % 10;  
        decimal = decimal + last_digit * base;  
        num = num / 10;  
        base = base * 2; 
    }

    cout << "Decimal Equivalent: " << decimal << endl;

    return 0;
}
