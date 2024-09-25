/*WAP to reverse the strings*/
#include<stdio.h>
#include<string.h>
void main()
{
    char str[100] = "INSPIRIA";


    printf("Original string %s \n" , str);
    int length = strlen(str);

    int j = length-1;
    for(int i=0 ; i<j ; i++ , j--)
        {
        char c;
        c = str[i];
        str[i] = str[j];
        str[j] = c;

        
    }
    
    printf("Reversed string is %s \n" , str);
}
