#include <stdio.h>
void reverse_ptr(char *start, char *end) 
{
    if (start >= end)
        return;
    char temp = *start;
    *start = *end;
    *end = temp;
    reverse_ptr(start + 1, end - 1);
}
int main() {
    char str[10];
    char *start = str;
    char *end = str;
    printf("enter a string:");
    scanf("%s",str);
    while (*end != '\0') 
    {
        end++;
    }
    end--; 
    reverse_ptr(start, end);
    printf("Reversed string: %s\n", str);
    return 0;
}
