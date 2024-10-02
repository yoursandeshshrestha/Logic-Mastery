/*Even or odd*/
#include<iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter your desired number: " << endl;
    cin >> num;

    if (num % 2 == 0)
        cout << "You have entered an even number" << endl;
    else
        cout << "You have entered an odd number" << endl;

    return 0;
}
