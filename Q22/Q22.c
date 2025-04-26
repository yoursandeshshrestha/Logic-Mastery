/*Check if a number is a power of two.*/
#include <stdio.h>

int main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0 && (number & (number - 1)) == 0) 
    {
        printf("%d is a power of two.\n", number);
    }
    
     else
    {
        printf("%d is not a power of two.\n", number);
    }

    return 0;
}
