//take a binary[0/1] string and print its decimal value
#include <stdio.h>
#include <string.h>
#include <math.h>
int binary_to_decimal(char binary[]) 
{
    int len = strlen(binary);
    int decimal = 0;
    for(int i=0; i<len; i++) 
    {
        if(binary[i] == '1') 
        {
            decimal += 1 << (len - 1 - i); 
        } 
        else if(binary[i] != '0') 
        {
            printf("Invalid character '%c' in binary string.\n", binary[i]);
            return -1;
        }
    }
    return decimal;
}

int main(void) 
{
    char binary[100];
    printf("Enter a binary string (0s and 1s): ");
    scanf("%s", binary);
    int decimal = binary_to_decimal(binary);
    if(decimal != -1) 
    {
        printf("Decimal value: %d\n", decimal);
    }
    return 0;
}