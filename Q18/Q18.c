/*Count the number of occurrences of a character in a string.*/
#include<stdio.h>
void main()
{
    char mystring[100];
    int i=0 , count=0;

    printf("Enter a string \n");
    scanf("%s" , mystring);

    while(mystring[i]!='\0')
    {
        if(mystring[i]!='a' && mystring[i]!='e' && mystring[i]!='i' && mystring[i]!='o' && mystring[i]!='u')
        {
            count++;
        }
        i++;
        
    }
            
    printf("%d \n" , count);
}
