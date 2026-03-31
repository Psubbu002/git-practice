//write a program to validate password string with one capital,small,digit,special and lenght be 8 at least
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) 
{
    char password[100];
    int hasUpper, hasLower, hasDigit, hasSpecial;
    printf("Enter password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0'; 
    int len = strlen(password);
    if(len < 8) 
    {
        printf("Password must be at least 8 characters long.\n");
        return 0;
    }
    hasUpper = hasLower = hasDigit = hasSpecial = 0;
    for(int i = 0; i < len; i++) 
    {
        if(isupper(password[i])) 
            hasUpper = 1;
        else if(islower(password[i])) 
            hasLower = 1;
        else if(isdigit(password[i])) 
            hasDigit = 1;
        else 
            hasSpecial = 1; 
    }

    if(hasUpper && hasLower && hasDigit && hasSpecial) 
    {
        printf("Password is valid.\n");
    } 
    else 
    {
        printf("Password is invalid. Requirements:\n");
        if(!hasUpper) 
            printf("- At least one uppercase letter\n");
        if(!hasLower) 
            printf("- At least one lowercase letter\n");
        if(!hasDigit) 
            printf("- At least one digit\n");
        if(!hasSpecial) 
            printf("- At least one special character\n");
    }
    return 0;
}