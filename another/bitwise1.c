#include <stdio.h>
int main() 
{
    unsigned int a = 8;   // 0000 1000
    int n = 3;
    printf("Initial value of a = %u \n\n", a);
    // Set the nth bit
    a |= (1 << n);
    printf("After setting the %dth bit: %u\n", n, a);
    // Clear the nth bit
    a &= ~(1 << n);
    printf("After clearing the %dth bit: %u\n", n, a);
    // Toggle the 1st bit
    a ^= (1 << 1);
    printf("After toggling the 1st bit: %u\n", a);
    // Check if the nth bit is set
    if (a & (1 << n)) 
    {
        printf("Bit %d is SET.\n", n);
        printf("Value of a: %u\n", a);
    } 
    else 
    {
        printf("Bit %d is NOT set.\n", n);
        printf("Value of a: %u\n", a);
    }
    return 0;
}
