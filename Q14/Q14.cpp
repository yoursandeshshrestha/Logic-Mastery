#include <iostream>
using namespace std;

int main() {
    int n, i, max, min;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    
    cout << "Enter the elements of the array:\n";
    
    for (i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    
    max = arr[0];
    min = arr[0];


    for (i = 1; i < n; i++) 
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}
