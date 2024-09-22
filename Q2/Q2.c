/* Find the largest of three numbers*/
#include<stdio.h>
void main()
{
  int a , b, c , largest;

  printf("Enter the first number\n");
  scanf("%d" , &a);

  printf("Enter the second number\n");
  scanf("%d", &b);

  printf("Enter the third number\n");
  scanf("%d", &c);
  
  if (a >= b && a >= c) {
    largest = a;
  } 
  else if (b >= a && b >= c) {
    largest = b;
  } 
  else {
    largest = c;
  }

  printf("The largest number is: %d\n", largest);
}
