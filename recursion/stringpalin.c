#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isPalindrome(char str[], int start, int end)
{
    while (start < end) 
    {
        if (!isalnum(str[start])) 
        {
            start++;
            continue;
        }
        if (!isalnum(str[end])) 
        {
            end--;
            continue;
        }
        if (tolower(str[start]) != tolower(str[end])) return 0;
        start++;
        end--;
    }
    return 1;
}
int main()
{
    char str[100];
    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (str[len - 1] == '\n') str[len - 1] = '\0';
    len = strlen(str); 
    if (isPalindrome(str, 0, len - 1))
        printf("\"%s\" is a Palindrome.\n", str);
    else
        printf("\"%s\" is not a Palindrome.\n", str);
    return 0;
}
