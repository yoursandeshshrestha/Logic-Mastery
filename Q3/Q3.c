/*Factorial using recusion*/
#include<stdio.h>
int fact(int n);
int main()
{
    printf("Factorial : %d", fact(4));
    return 0;
}
int fact(int n)
{
    if( n==0)
    {
        return 1;
    }
    int fact1= fact(n-1);
    int fact2 = fact1 * n;
    return fact2;
}
