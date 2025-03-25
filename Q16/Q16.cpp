/*Remove the duplicate in an array*/
#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {1, 2, 3, 2, 4, 5, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); 

    cout << "Original Array: ";

    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                for (int k = j; k < n - 1; k++) 
                {
                    arr[k] = arr[k + 1];
                }
                n--; 
                j--; 
            }
        }
    }

        cout << "Array after removing duplicates: ";
    
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
