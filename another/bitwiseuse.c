#include <stdio.h>
int main() 
{
    unsigned int a = 8;   // 0000 0101
    int n=3;
    printf("a = %u \n\n", a, a);
    a|=(1<<n);
    printf(" after setting  the 1st bit : %d\n",a); // set bit 
    a&=~(1<<n);
    printf("after clearing the set bit :%d\n",a);//clearing set bit
    a^=(1<<n);
    printf("After toggling :%d\n",a);//toggle the bit
    //checking a bit is set
    if (a & (1 << n)) {
        printf("Bit %d is SET.\n", n);
        printf("%d",a);
    } else {
        printf("Bit %d is NOT set.\n", n);
    }
    return 0;
}