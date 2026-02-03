#include <stdio.h>
#include <math.h>
int main() 
{
    unsigned int a = 8;   // 0000 1000
    int n = 3;
    printf("Initial value of a = %u \n\n", a);
    
    a |= (1 << n);          // Set the nth bit
    printf("After setting the %dth bit: %u\n\n", n, a);

    // Check if the nth bit is set
    if (a & (1 << n)) 
    {
        printf("Bit %d is SET.\n", n);
        printf("Value of a: %u\n\n", a);
    } 
    else 
    {
        printf("Bit %d is NOT set.\n", n);
        printf("Value of a: %u\n\n", a);
    }

    a &= ~(1 << n);         // Clear the nth bit
    printf("After clearing the %dth bit: %u\n\n", n, a);

    a ^= (1 << 2);          // Toggle the 1st bit
    printf("After toggling the 2st bit: %u\n\n", a);
    
    int x=8;
    int inverted = ~x;    //compliment all bits
    printf("Original: %d, Inverted: %d\n\n", x, inverted);

    int num=6;            // two's complement
    int method1=~num+1;
    int method2=-num;
    printf("Two's complement with method 1 : %d\n",method1);
    printf("Two's complement with method 2 : %d\n\n",method2);

    int y = 7;  
    int result = y & (y-1);           // stripping
    printf("After stripping lowest set bit of %d: %d\n", y, result);  // 6 (0110)

    int z = 10;  
    int lsb = z & -z;               // getting the lowest set bit value
    printf("Lowest set bit in %d is: %d\n", z, lsb);

    int b=16;
    int result1=b && !(b & (b - 1));    //Check If a Number is a Power of Two
    printf("%d -> %s\n", b, result1 ? "Yes" : "No");

    int c = 12;  
    int lsb1 = c & -c;
    int result3= (int)log2(lsb1) + 1;   //the Position of the Last Set Bit (Rightmost 1)
    printf("Lowest set bit of %d is at position: %d\n", c, result3);
    return 0;
}
