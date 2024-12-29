/*Capitalize the first letter of every word in a string*/
#include <stdio.h>
#include <ctype.h>

void capitalizeWords(char str[]) 
{
    for (int i = 0; str[i] != '\0'; i++) 
    {
        
        if (i == 0 || str[i - 1] == ' ') 
        {
            str[i] = toupper(str[i]);
        }
    }
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    capitalizeWords(str);

    printf("Capitalized String: %s", str);

    return 0;
}
