//IPv4 validation
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int is_valid_ip(char ip[]) 
{
    int num, dots = 0;
    char *token;
    char copy[50];
    strcpy(copy, ip);
    token = strtok(copy, "."); 
    while(token != NULL) 
    {
        int len = strlen(token);
        if(len == 0) 
            return 0; 
        for(int i = 0; i < len; i++) 
        {
            if(!isdigit(token[i])) 
                return 0;
        }
        num = atoi(token);
        if(num < 0 || num > 255) 
            return 0; 
        dots++;
        token = strtok(NULL, ".");
    }
    return (dots ==3);
}

int main(void) 
{
    char ip[50];
    printf("Enter IPv4 address: ");
    scanf("%s", ip);
    if(is_valid_ip(ip)) {
        printf("Valid IPv4 address.\n");
    } 
    else {
        printf("Invalid IPv4 address.\n");
    }
    return 0;
}