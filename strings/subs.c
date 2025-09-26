#include <stdio.h>
int getStringLength(char str[]) 
{
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') 
    {
        length++;
    }
    str[length] = '\0'; 
    return length;
}
int isSubstringAtPosition(char str[], char substr[], int pos) 
{
    int i = 0;
    while (substr[i] != '\0') 
    {
        if (str[pos + i] == '\0' || str[pos + i] != substr[i]) 
        {
            return 0; // Not a match
        }
        i++;
    }
    return 1; 
}
int main() 
{
    char str[100], substr[100];
    int i, found = 0;
    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the substring to search: ");
    fgets(substr, sizeof(substr), stdin);
    int lenStr = getStringLength(str);
    int lenSubstr = getStringLength(substr);
    for (i = 0; i <= lenStr - lenSubstr; i++) 
    {
        if (isSubstringAtPosition(str, substr, i)) 
        {
            printf("Substring found at position %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Substring not found.\n");
    }
    return 0;
}