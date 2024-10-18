/*Array sort in ascending order*/
#include <iostream>
using namespace std;

int main()
{
    int n, i, j, temp;

    cout << "Enter the size of an array: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: " << endl;

    for (i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {   
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array in ascending order:" << endl;

    for (i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    
    cout << endl;

    return 0;
}
