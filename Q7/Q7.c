/*Fibonacci Series*/
#include<stdio.h>
void main()
{
    int i=0, j=1, n;
   
    printf("Enter the nth number of times\n");
    scanf("%d" , &n);
    printf("%d\t%d\t" , i,j );

    for(int k=0;k<n-2;k++)
  {
       int sum;
       
       sum= i+j;
       i=j;
       j=sum;
       
       printf("%d \t" , sum);
  }
}
