#include <stdio.h>
void reverse_string(char str[], int start, int end) 
{
    if (start >= end)
        return;
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverse_string(str, start + 1, end - 1);
}
int StringLength(char *str) 
{
    if (*str == '\0') return 0;
    return 1 + StringLength(str + 1);
}
int main() 
{
    char str[100];
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin)) 
    {
        int i = 0;
        while (str[i] != '\0') 
        {
            if (str[i] == '\n') 
            {
                str[i] = '\0';
                break;
            }
            i++;
        }
        int len = StringLength(str);
        reverse_string(str, 0, len - 1);
        printf("Reverse String: %s\n", str);
    } 
    else 
    {
        printf("Error reading input.\n");
    }
    return 0;
}