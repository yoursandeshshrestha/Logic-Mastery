//Write a C function to check if a number is even or odd.
#include<stdio.h>
void main()
{
  int num ;
printf("Enter your desired number : \n");
scanf("%d" , &num);

if(num%2==0)
  printf("You have entered an even number\n");

else
  printf("You have entered an odd number\n");
}
