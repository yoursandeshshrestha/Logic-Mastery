/*Implement the binary search on a sorted array*/
#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int left = 0, right = n - 1;

    while (left <= right) 
    {
        int mid = (left + right) / 2;

        if (arr[mid] == target) 
        {
            cout << "Element found at index " << mid << endl;
            return 0;
        }
         else if (arr[mid] < target) 
        {
            left = mid + 1;
        }
        else 
        {
            right = mid - 1;
        }
    }

    cout << "Element not found in the array" << endl;
    return 0;
}
