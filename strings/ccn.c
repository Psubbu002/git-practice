#include <stdio.h>
void copyNChars(char dest[], char src[], int n) 
{
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++) 
    {
        dest[i] = src[i];
    }
    dest[i] = '\0'; 
}
int compareNChars(char str1[], char str2[], int n) 
{
    int i;
    for (i = 0; i < n; i++) 
    {
        if (str1[i] != str2[i]) 
        {
            return (str1[i] - str2[i]);  
        }
        if (str1[i] == '\0' || str2[i] == '\0') 
        {
            break; 
        }
    }
    return 0; 
}
int main() 
{
    char source[100], destination[100], str1[100], str2[100];
    int n, result;
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);
    int i = 0;
    while (source[i] != '\0') 
    {
        if (source[i] == '\n') 
        {
            source[i] = '\0';
            break;
        }
        i++;
    }
    printf("Enter number of characters to copy: ");
    scanf("%d", &n);
    getchar(); 
    copyNChars(destination, source, n);
    printf("Copied string: %s\n", destination);
    printf("\nEnter first string : ");
    fgets(str1, sizeof(str1), stdin);
    i = 0;
    while (str1[i] != '\0') 
    {
        if (str1[i] == '\n') 
        {
            str1[i] = '\0';
            break;
        }
        i++;
    }
    printf("Enter second : ");
    fgets(str2, sizeof(str2), stdin);
    i = 0;
    while (str2[i] != '\0') 
    {
        if (str2[i] == '\n') 
        {
            str2[i] = '\0';
            break;
        }
        i++;
    }
    printf("Enter number of characters to compare: ");
    scanf("%d", &n);
    result = compareNChars(str1, str2, n);
    if (result == 0) 
    {
        printf("The strings are equal up to %d characters.\n", n);
    } 
    else if (result < 0) 
    {
        printf("str1 is less than str2 in the first %d characters.\n", n);
    } 
    else 
    {
        printf("str1 is greater than str2 in the first %d characters.\n", n);
    }
    return 0;
}