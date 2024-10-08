/*Armstrong Number*/
#include <stdio.h>
void main() 
{
    int num, originalNum, remainder, n = 0, result = 0, power, temp;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;


    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        power = 1;  

        for (int i = 0; i < n; i++) 
        {
            power *= remainder;
        }

        result += power;
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
  
    else
        printf("%d is not an Armstrong number.\n", num);

}
