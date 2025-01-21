#include <stdio.h>

int main()
{
    int n, i, j, max_count = 0, most_frequent;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], freq[n];

    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;  
    }

    for (i = 0; i < n; i++) 
    {
        int count = 1;
        for (j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                count++;
                freq[j] = 0;  
            }
        }
        if (freq[i] != 0) 
        {
            freq[i] = count;
        }
    }

    for (i = 0; i < n; i++) 
    {
      
        if (freq[i] > max_count) 
        {
            max_count = freq[i];
            most_frequent = arr[i];
        }
    }

    printf("The most frequent element is %d and it appears %d times.\n", most_frequent, max_count);

    return 0;
}
