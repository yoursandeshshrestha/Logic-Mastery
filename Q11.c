/*Convert Celsius to Fahrenheit and vice versa.*/
#include<stdio.h>
void main()
{
	 int  fahrenheit , choice;
  	printf("Enter your choice \n 1. Celcius to Fahrenheit \n 2. Fahrenheit to Celcius \n");
	scanf("%d" , &choice);
	
	switch(choice)
	{
		case 1: printf("....Calculating Celcius to Fahrenheit.... \n");
			int celcius ;
			printf("Enter the temperature in Celcius \n");
			scanf("%d" , &celcius);
			
			int fahrenheit ;
			fahrenheit = celcius * (9/5) + 32;
			
			printf("%d degree Celcius in Fahrenheit is  %d \n" , celcius , fahrenheit);
			break;
			
		case 2: printf("....Calculating Fahrenheit in Celcius.... \n");
			int temperature;
			
			printf("Enter the temparature in Fahrenheit\n");
			scanf("%d" , &temperature);
			
			int result;
			result = (temperature - 32) * 5/9;
			
			printf("%d degree Fahrenheit in Celcius is %d \n" , temperature , result);
			break;
			
		default: printf("....Wrong input....\n");
			break;
	}
}
