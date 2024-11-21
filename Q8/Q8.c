/*Sum of a given number*/
#include <stdio.h>
int sum(int num)
 {
    if (num == 0) 
    {
        return 0;
    }
    return (num % 10) + sum(num / 10); 
}

void main() 
{
    int num;

    printf("Enter a number: \n");
    scanf("%d", &num);

    printf("Sum of digits : %d\n", sum(num));

}
