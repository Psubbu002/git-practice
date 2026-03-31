#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int my_atoi(char str[]) 
{
    int num = 0, i = 0, sign = 1;
    if(str[0] == '-') 
    { 
        sign = -1; i = 1; 
    }
    for(; str[i]; i++) 
    {
        if(!isdigit(str[i])) 
            break;
        num = num*10 + (str[i]-'0');
    }
    return sign*num;
}

void my_itoa(int num, char str[]) 
{
    int i = 0, sign = num;
    if(num < 0) num = -num;
    do {
        str[i++] = (num % 10) + '0';
        num /= 10;
    } while(num > 0);
    if(sign < 0) 
        str[i++] = '-';
    str[i] = '\0';
    for(int j=0, k=i-1; j<k; j++, k--) 
    {
        char temp = str[j]; 
        str[j] = str[k]; 
        str[k] = temp;
    }
}

int main(void) 
{
    char str1[100], str2[100];
    char s[20];
    char delimiters[] = " ,.-"; 
    char *token;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1,"\n")] = '\0';

    printf("Enter another string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2,"\n")] = '\0';

    printf("Length of first string: %zu\n", strlen(str1));

    char copy[100];
    strcpy(copy, str1);
    printf("Copied string: %s\n", copy);

    int cmp = strcmp(str1, str2);
    printf("Comparison of strings: %d\n", cmp);

    char concat[200];
    strcpy(concat, str1);
    strcat(concat, str2);
    printf("Concatenated string: %s\n", concat);

    char ch;
    printf("Enter character to search: ");
    scanf(" %c", &ch);
    char *pos = strchr(str1, ch);
    if(pos) printf("Character '%c' found at position %ld\n", ch, pos-str1);
    else printf("Character not found\n");

    getchar(); 
    char substr[100];
    printf("Enter substring to search: ");
    fgets(substr, sizeof(substr), stdin);
    substr[strcspn(substr,"\n")] = '\0';
    char *subpos = strstr(str1, substr);
    if(subpos) printf("Substring found at position %ld\n", subpos-str1);
    else printf("Substring not found\n");

  
    printf("Tokens in first string:\n");
    strcpy(copy, str1); 
    token = strtok(copy, delimiters);
    while(token != NULL) 
    {
        printf("%s\n", token);
        token = strtok(NULL, delimiters);
    }

    char numstr[20];
    printf("Enter a numeric string to convert to integer: ");
    fgets(numstr, sizeof(numstr), stdin);
    numstr[strcspn(numstr,"\n")] = '\0';
    int num = my_atoi(numstr);
    printf("Converted integer: %d\n", num);

    int n;
    printf("Enter an integer to convert to string: ");
    scanf("%d", &n);
    my_itoa(n, s);
    printf("Converted string: %s\n", s);
    return 0;
}