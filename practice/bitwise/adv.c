#include <stdio.h>
#include <limits.h>
int clearFirstSetBit(int num) 
{
    return num & (num - 1);
}

int countSetBits(int num) 
{
    int count = 0;
    while(num) 
    {
        num &= (num - 1);
        count++;
    }
    return count;
}

void printPowerOf2(int n) 
{
    int val = 1;
    for(int i = 0; i <= n; i++) 
    {
        printf("%d ", val);
        val <<= 1;
    }
    printf("\n");
}

void printBinary(int num) 
{
    for(int i = sizeof(int)*8 - 1; i >= 0; i--) 
    {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int makeNegative(int num) 
{
    return ~num + 1;  
}

int setBit(int num, int pos) 
{ 
    return num | (1 << pos); 
}

int clearBit(int num, int pos) 
{ 
    return num & ~(1 << pos); 
}

int toggleBit(int num, int pos) 
{ 
    return num ^ (1 << pos); 
}

int getBit(int num, int pos) 
{ 
    return (num >> pos) & 1; 
}

void printNBits(int num, int n) 
{
    for(int i = n-1; i >= 0; i--) 
    {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int getNBits(int num, int n) 
{
    return num & ((1 << n) - 1);
}

int reverseBinary(int num) 
{
    int rev = 0;
    int bits = sizeof(int)*8;
    for(int i = 0; i < bits; i++) 
    {
        rev <<= 1;
        rev |= (num & 1);
        num >>= 1;
    }
    return rev;
}

int postInc(int *num) 
{
    int old = *num;
    *num = -*num;  
    *num = ~(*num) + 1;  
    return old;
}

int postDec(int *num) 
{
    int old = *num;
    *num = ~(*num) + 1;  
    *num = *num + ~0;     
    return old;
}

int setNBits(int num, int n, int pos) 
{ 
    return num | (((1 << n) - 1) << pos); 
}

int clearNBits(int num, int n, int pos) 
{ 
    return num & ~(((1 << n) - 1) << pos); 
}

int toggleNBits(int num, int n, int pos) 
{ 
    return num ^ (((1 << n) - 1) << pos); 
}

int getNBitsAtPos(int num, int n, int pos) 
{ 
    return (num >> pos) & ((1 << n) - 1); 
}

unsigned char swapNibbles(unsigned char byte) 
{
    return (byte << 4) | (byte >> 4);
}

unsigned int circularLeftShift(unsigned int num, int shift) 
{
    int bits = sizeof(unsigned int)*8;
    return (num << shift) | (num >> (bits - shift));
}

unsigned int circularRightShift(unsigned int num, int shift) 
{
    int bits = sizeof(unsigned int)*8;
    return (num >> shift) | (num << (bits - shift));
}

int xorWithoutCaret(int a, int b) 
{
    return (a | b) & ~(a & b);
}

int findNonRepeating(int arr[], int n) 
{
    int res = 0;
    for(int i=0;i<n;i++)
        res ^= arr[i];
    return res;
}

int findMissingNumber(int arr[], int n) 
{
    int x1 = 1;
    for(int i=2; i<=n; i++) 
        x1 ^= i;
    int x2 = 0;
    for(int i=0; i<n-1; i++) 
        x2 ^= arr[i];
    return x1 ^ x2;
}

void printBytesLSB(int num) 
{
    unsigned char *p = (unsigned char*)&num;
    for(int i=0; i<sizeof(int); i++) 
    {
        printf("Byte %d: %d\n", i, p[i]);
    }
}

int main(void) 
{
    int num = 29; 
    int arr[] = {1,2,3,5,4};
    
    printf("Original number: %d\n", num);
    printf("After clearing first set bit: %d\n", clearFirstSetBit(num));
    printf("Number of set bits: %d\n", countSetBits(num));
    printf("2 power series: "); printPowerOf2(5);
    printf("Binary: "); printBinary(num);
    printf("Negative: %d\n", makeNegative(num));
    
    printf("Set bit 1: %d\n", setBit(num,1));
    printf("Get bit 3: %d\n", getBit(num,3));
    printf("Clear bit 3: %d\n", clearBit(num,3));
    printf("Toggle bit 0: %d\n", toggleBit(num,0));
    
    printf("3 bits from LSB: "); printNBits(num,3);
    printf("Get 4 bits from LSB: %d\n", getNBits(num,4));
    
    printf("Reverse binary: %d\n", reverseBinary(num));
    printf("Swap nibbles of 100: %d\n", swapNibbles(100));
    
    printf("Circular left shift 3 times: %d\n", circularLeftShift(num,3));
    printf("Circular right shift 2 times: %d\n", circularRightShift(num,2));
    
    printf("XOR of 5 and 3 without ^: %d\n", xorWithoutCaret(5,3));
    
    int arr2[] = {1,2,3,2,1};
    printf("Non-repeating number: %d\n", findNonRepeating(arr2,5));
    
    int arr3[] = {1,2,4,5};
    printf("Missing number: %d\n", findMissingNumber(arr3,5));
    printf("Decimal value of each byte (LSB side):\n"); printBytesLSB(num);
    return 0;
}