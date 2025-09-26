#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() 
{
    char str[1000];
    int i, wordCount = 0, charCount = 0;
    int inWord = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        // Count characters excluding spaces and newlines
        if (str[i] != ' ' && str[i] != '\n') {
            charCount++;
        }
        // Check if we are inside a word
        if (isspace(str[i])) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            wordCount++;
        }
    }
    printf("Character count (excluding spaces): %d\n", charCount);
    printf("Word count: %d\n", wordCount);
    return 0;
}