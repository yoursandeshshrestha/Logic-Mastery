/*Check if two strings are anagrams.*/
#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100], str2[100];
    int count[256] = {0}; 
    int i;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    
    if (strlen(str1) != strlen(str2)) 
    {
        printf("The strings are not anagrams.\n");
        return 0;
    }


    for (i = 0; str1[i] != '\0'; i++) 
    {
        count[(unsigned char)str1[i]]++; 
        count[(unsigned char)str2[i]]--; 
    }

   
    for (i = 0; i < 256; i++) 
    {
        if (count[i] != 0) 
        {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");

    return 0;
}
