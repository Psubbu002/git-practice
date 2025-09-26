#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 256  
int areAnagrams(char str1[], char str2[]) 
{
    int count[SIZE] = {0};
    int i;
    if (strlen(str1) != strlen(str2))
        return 0;
    for (i = 0; str1[i] && str2[i]; i++) 
    {
        count[tolower(str1[i])]++;   
        count[tolower(str2[i])]--;   
    }
    for (i = 0; i < SIZE; i++) 
    {
        if (count[i] != 0)
            return 0;
    }
    return 1;
}
int main() 
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);  
    printf("Enter second string: ");
    gets(str2);
    if (areAnagrams(str1, str2))
        printf("The strings are anagrams.\n");
    else
        printf("The strings are NOT anagrams.\n");
    return 0;
}