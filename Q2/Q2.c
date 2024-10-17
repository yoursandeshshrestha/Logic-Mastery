/*Find the largest of three numbers.*/
#include<stdio.h>
void main()
{
    int  a, b, c, largest;

    printf("Enter First Number : ");
    scanf("%d" , &a);

    printf("Enter Second Number : ");
    scanf("%d" , &b);

    printf("Enter Third Number : ");
    scanf("%d" , &c);

    if(a>b && a>c)
    {
        printf("Largest Number is : %d\n" , a);
    }

    else if(b>a && b>c)
    {
        printf("Largest Number is : %d\n", b);
    }

    else
    {
        printf("Largest Number is : %d\n", c);
    }

}
