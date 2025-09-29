#include <stdio.h>
int countBits(int n) 
{
    int count = 0;
    while (n) 
    {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}
int main() 
{
    int n,k;
    printf("Input an integer value:");
    scanf("%d",&n);
    printf("Set bits = %d\n", countBits(n));

    k = 1; // toggle 1st bit (from right)
    n = n ^ (1 << k);
    printf("Result = %d\n", n);

    k = 2;
    if (n & (1 << k))
        printf("Bit is SET\n");
    else
        printf("Bit is NOT set\n");

    k = 1;
    n = n | (1 << k);
    printf("Result = %d\n", n);

    n = 7;;
    n = n & ~(1 << k);
    printf("Result = %d\n", n);

    return 0;
}
