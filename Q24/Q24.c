/*Binary to decimal conversion*/
#include<stdio.h>
void main()
{
    int num , decimal = 0 , x=1, y;

    printf("Enter a binary number\n");
    scanf("%d" , &num);

    while(num>0)
    {
        y = num %10;
        decimal = decimal + y * x;
        num = num /10;
        x = x*2;
    }

    printf("Decimal Equivalent : %d\n" , decimal);
}
