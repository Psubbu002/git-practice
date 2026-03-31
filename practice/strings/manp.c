#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) 
{
    char str[100], result[100];
    int j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';

    for(int i = 0; str[i]; i++) 
    {
        if(i+1 < strlen(str) && isdigit(str[i+1])) 
        {
            i++; 
            continue;
        } 
        else if(!isdigit(str[i])) 
        {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    printf("Output string: %s\n", result);
    return 0;
}