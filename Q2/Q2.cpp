/*Find the largest among three numbers*/
#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;

    cout << "Enter First Number: ";
    cin >> a;

    cout << "Enter Second Number: ";
    cin >> b;

    cout << "Enter Third Number: ";
    cin >> c;

    if(a >= b && a >= c) 
    {
        cout << "Largest Number is: " << a << endl;
    }
    
    else if(b >= a && b >= c) 
    {
        cout << "Largest Number is: " << b << endl;
    }
    else 
    {
        cout << "Largest Number is: " << c << endl;
    }

    return 0;
}
