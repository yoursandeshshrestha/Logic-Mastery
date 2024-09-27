/*Check if a given year is a leap year.*/
#include<stdio.h>
void main()
{
	 int year;
	int n =4;	 
	 printf("Enter a year of your choice : \n");
	 scanf("%d" , &year);

	if(year%n==0)
	{
		printf("You have entered a leap year");
	}
	
	else
	{
		printf("The year you have entered is not leap year\n");
	}
}
