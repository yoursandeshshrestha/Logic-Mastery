#include <stdio.h>
#include <string.h>

char* findLongestWord(char* str) {
    char* word = strtok(str, " ");
    char* longestWord = word;
    
    while (word != NULL) {
        if (strlen(word) > strlen(longestWord)) {
            longestWord = word;
        }
        word = strtok(NULL, " ");
    }
    
    return longestWord;
}

int main() {
    char str[] = "Find the longest word in a string";
    printf("Longest word: %s\n", findLongestWord(str));
    return 0;
}
