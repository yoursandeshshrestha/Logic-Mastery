/*Implement binary search on a sorted array.*/
#include <stdio.h>

void main() 
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = 5; 
    int target = 10;
    int left = 0, right = n - 1;
    int mid;

    while (left <= right) 
    {
        mid = left + (right - left) / 2;
        
        if (arr[mid] == target) 
        {
            printf("Element found at index %d\n", mid);
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

    printf("Element not found in the array\n");
    
}
