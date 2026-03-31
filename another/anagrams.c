//listen=silent
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void cleanString(char src[], char dest[]) 
{
    int i, j = 0;
    for (i = 0; src[i]; i++) 
    {
        if (isalpha(src[i]))
            dest[j++] = tolower(src[i]);
    }
    dest[j] = '\0';
}
int areAnagrams(char str1[], char str2[]) 
{
    int count[26] = {0};
    int i;
    if (strlen(str1) != strlen(str2))
        return 0;

    for (i = 0; str1[i]&&str2[i]; i++)
    {
        count[str1[i] - 'a']++;
        count[str2[i] - 'a']--;
    }
    for (i = 0; i < 26; i++)
    {
        if (count[i] != 0)
            return 0;
    }
    return 1;
}
int main(void) 
{
    char str1[100], str2[100], clean1[100], clean2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
   // str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
   // str2[strcspn(str2, "\n")] = '\0';

    cleanString(str1, clean1);
    cleanString(str2, clean2);

    if (areAnagrams(clean1, clean2))
    {
        printf("The strings are anagrams.\n");
    }
    else
    {
        printf("The strings are NOT anagrams.\n");
    }
    return 0;
}