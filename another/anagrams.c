//Listen=Silent, Angel=angle
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int areAnagrams(char str1[], char str2[])
{
    int count[26] = {0};
    int i;
    if(strlen(str1)!=strlen(str2))
    {
        return 1;
    }
    for (i = 0; str1[i]&&str2[i]; i++) 
    {
        if (isalpha(str1[i])&&isalpha(str2[i]))
        {
            count[tolower(str1[i])]++;
            count[tolower(str2[i])]--;
        }
    }
    for (i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            return 0;
        }
    }
    return 1;
}
int main(void) 
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    if (areAnagrams(str1, str2))
    {
        printf("The strings are anagrams.\n");
    }
    else
    {
        printf("The strings are NOT anagrams.\n");
    }
    return 0;
}