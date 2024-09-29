/*Vowels in string*/

#include<stdio.h>
void main()
{
    char string[100]; 

    printf("Enter your string \n");
    scanf("%s" , string);

    int i=0  , vowels=0 ;

    while(string[i]!= '\0')
    {
        if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U')
        {
            vowels++;
        }
    i++;
    }
  printf("%d\n" , vowels);
}
