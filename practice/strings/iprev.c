//reverse the IPv4
#include <stdio.h>
#include <string.h>
int main(void) 
{
    char ip[50], copy[50];
    char *parts[4];
    int count = 0;
    printf("Enter IPv4 address: ");
    scanf("%s", ip);
    strcpy(copy, ip); 
    char *token = strtok(copy, ".");
    while(token != NULL && count < 4) 
    {
        parts[count++] = token;
        token = strtok(NULL, ".");
    }
    if(count != 4) 
    {
        printf("Invalid IPv4 address.\n");
        return 0;
    }
    printf("Reversed IPv4: %s.%s.%s.%s\n", parts[3], parts[2], parts[1], parts[0]);
    return 0;
}