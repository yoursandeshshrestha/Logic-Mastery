/*Binary to decimal*/
#include <iostream>
using namespace std;

void primeFactors(int n);

int main() 
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 0) 
    {
        cout << "Please enter a positive integer" << endl;
    } 
    
    else 
    {
        cout << "Prime factors of " << num << " are: ";
        primeFactors(num);  
        cout << endl;       
    }

    return 0;
}

void primeFactors(int n) 
{
    
    while (n % 2 == 0) 
    {
        cout << 2 << " ";
        n = n / 2;
    }

    
    for (int i = 3; i * i <= n; i = i + 2) 
    {

        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }


    if (n > 2)
        cout << n << " ";
}
