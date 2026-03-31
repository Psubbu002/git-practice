//print binary and convert decimal to hexadecimal
#include <stdio.h>
void printBinary(int n) 
{
    if (n == 0) return;          
    printBinary(n / 2);            
    printf("%d", n % 2);           
}

void printHex(int n) 
{
    if (n == 0) return;           
    printHex(n / 16);              
    int remainder = n % 16;
    if (remainder < 10) 
        printf("%d", remainder);
    else printf("%c", 'A' + remainder - 10);  
}

int main(void) 
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("Binary of %d: ", n);
    if (n == 0) 
        printf("0"); 
    else 
        printBinary(n);
    printf("\n");

    printf("Hexadecimal of %d: ", n);
    if (n == 0) 
        printf("0"); 
    else 
        printHex(n);
    printf("\n");
    return 0;
}