//IPV6 validation
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int is_valid_hex_part(char *part) 
{
    int len = strlen(part);
    if(len == 0 || len > 4) 
        return 0; 
    for(int i = 0; i < len; i++) 
    {
        if(!isxdigit(part[i])) 
            return 0; 
    }
    return 1;
}

int is_valid_ipv6(char ip[]) 
{
    char copy[100];
    strcpy(copy, ip); 
    char *token;
    int parts = 0;
    token = strtok(copy, ":"); 
    while(token != NULL) 
    {
        if(!is_valid_hex_part(token)) 
            return 0;
        parts++;
        token = strtok(NULL, ":");
    }
    return (parts == 8); 
}

int main(void) 
{
    char ip[100];
    printf("Enter IPv6 address: ");
    scanf("%s", ip);
    if(is_valid_ipv6(ip)) {
        printf("Valid IPv6 address.\n");
    } 
    else {
        printf("Invalid IPv6 address.\n");
    }
    return 0;
}