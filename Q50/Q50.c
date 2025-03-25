/*Prime factors*/
#include<stdio.h>
void primeFactors(int n);
void main() 
{
    int num;

    printf("Enter a positive integer: ");

    printf("Enter a positive integer :");

    scanf("%d",&num);

    if(num<=0)
    {
        printf("Please enter a positive integer\n");
    }
    else
    {
        printf("Prime factors of %d are :  ", num);
        
    }
    primeFactors(num);
  }
    void primeFactors(int n)
  {
    while (n%2==0)
    {
        printf("%d ",2);

        printf("Prime factors of %d are : ", n);
        
    }
    primeFactors(n);
}
