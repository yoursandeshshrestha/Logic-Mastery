/*Perform matrix multiplication.*/
#include<stdio.h>
void main()
{
    int arr1[3][3] , arr2[3][3] , arr3[3][3]= {0} , i , j ,k, arr[3][3];

    printf("Enter the elements of first matrix\n");

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("Enter the value at %d %d for first matrix \n" , i , j);
            scanf("%d" , &arr1[i][j]);
        }
    }

    printf("Enter the elements of second matrix\n");

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("Enter the value at %d %d for second matrix \n" , i , j);
            scanf("%d" , &arr2[i][j]);
        }
    }

   for(i=0 ; i<3 ; i++)
   {
    for(j=0; j<3 ; j++)
    {
        for(k=0 ; k<3 ; k++)
        {
            arr3[i][j] += arr1[i][k] * arr2[k][j];

        }
    }
   }

    for(i=0 ; i<3 ; i++)
    {
        for(j=0; j<3 ; j++)
        {
            printf("%d " , arr3[i][j]);
        }
        printf("\n");
    }

}
