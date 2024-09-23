/*Add number inside an array*/
include <stdio.h>
void main()
{
    int n, i, sum = 0;
    printf("Enter the size of an array : ");
    scanf("%d", &n);

    int arr[n]; 

   
    printf("Enter the elements of the array :\n");
   
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


    for (i = 0; i < n; i++) 
    {
        sum += arr[i];
    }

 
    printf("Sum of the array elements : %d\n", sum);
}

