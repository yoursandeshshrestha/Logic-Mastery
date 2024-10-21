/*Add number inside an array*/
#include <iostream>
int main() 
{
    int n, sum = 0;

    std::cout << "Enter the size of the array: ";
    std::cin >> n;


    if (n <= 0) 
    {
        std::cout << "Array size must be greater than 0." << std::endl;
        return 1;  
    }

    int* arr = new int[n];

    std::cout << "Enter the elements of the array:" << std::endl;
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

   
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    std::cout << "Sum of the array elements: " << sum << std::endl;

    delete[] arr;

    return 0; 
}
