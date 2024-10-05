/*Merge two sorted arrays into one sorted array*/
#include <iostream>
using namespace std;
int main() 
{
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int merged[6];
    int i = 0, j = 0, k = 0;

    while (i < 3 && j < 3)
     {
        if (arr1[i] < arr2[j]) 
        {
            merged[k++] = arr1[i++];
        } 
        else 
        {
            merged[k++] = arr2[j++];
        }
    }

   
    while (i < 3) 
    {
        merged[k++] = arr1[i++];
    }

    
    while (j < 3) 
    {
        merged[k++] = arr2[j++];
    }

    
    for (i = 0; i < 6; i++)
    {
        cout << merged[i] << " ";
    }

    return 0;
}
