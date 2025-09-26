#include <stdio.h>
#define MAX_STRINGS 10
#define STRING_LENGTH 50
int main()
{
    char strings[MAX_STRINGS][STRING_LENGTH];
    int n;
    printf("Enter total number of strings: ");
    scanf("%d", &n);
    printf("Enter strings...\n");
    for (int i = 0; i < n; i++) {
        printf("String [%d] ", i + 1);
        getchar(); 
        scanf("%[^\n]s", strings[i]);
    }
    printf("\nStrings are...\n");
    for (int i = 0; i < n; i++) {
        printf("[%2d]: %s\n", i + 1, strings[i]);
    }
    return 0;
}