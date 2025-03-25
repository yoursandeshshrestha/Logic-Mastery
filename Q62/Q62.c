/*Merge Sort*/
#include <stdio.h>

int main() 
{
    int arr[10], n, i, mid, left, right, temp[10];
    

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");

    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for (int size = 1; size < n; size *= 2) 
    {
        for (int start = 0; start < n - size; start += 2 * size) 
        {
            left = start;
            mid = start + size - 1;
            right = (start + 2 * size - 1 < n) ? start + 2 * size - 1 : n - 1;

            int l = left, m = mid + 1, k = left;

            while (l <= mid && m <= right) 
            {
                if (arr[l] <= arr[m]) 
                {
                    temp[k++] = arr[l++];
                }
                
                else 
                {
                    temp[k++] = arr[m++];
                }
            }

            while (l <= mid) 
            {
                temp[k++] = arr[l++];
            }

            while (m <= right) 
            {
                temp[k++] = arr[m++];
            }

            for (int t = left; t <= right; t++) 
            {
                arr[t] = temp[t];
            }
        }
    }

    printf("Sorted array:\n");

    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
