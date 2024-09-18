//# Write a function to check if a number is even or odd.
#include<stdio.h>
void main()
{
  int num;
  printf("Enter a number of your choice: \n");
  scanf("%d" , &num);

  if(num%2==0)
  {
    printf("You have entered an even number\n");
  }

  else
  {
    printf("You have entered an odd number\n");
  }
}
