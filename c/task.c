#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char s[100];
    int n;
    printf("Enter a string: ");
    scanf("%s", s);
    n = strlen(s);  
    printf("Reversed string: ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
    printf("\n");
    return 0; 
}
