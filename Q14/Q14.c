/*Max and min*/
#include <stdio.h>
void main()
{
    int n, i, max, min;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");

    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (i = 1; i < n; i++) 
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
         {
            min = arr[i];
         }    
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

}
