#include <stdio.h>
void checkEvenOdd(int num) 
{
    if (num & 1)  
        printf("%d is odd.\n", num);
    else
        printf("%d is even.\n", num);
}

void checkPowerOfTwo(int num) 
{
    if (num > 0 && (num & (num - 1)) == 0)
        printf("%d is a power of 2.\n", num);
    else
        printf("%d is NOT a power of 2.\n", num);
}

void doubleHalf(int num) 
{
    int doubled = num << 1;   // Left shift by 1 → multiply by 2
    int halved = num >> 1;    // Right shift by 1 → divide by 2
    printf("Double of %d is %d\n", num, doubled);
    printf("Half of %d is %d\n", num, halved);
}

void swapNumbers(int *a, int *b) 
{
    if (a != b) 
    { 
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}

int main(void) 
{
    int num1, num2;
    printf("Enter a number: ");
    scanf("%d", &num1);

    checkEvenOdd(num1);
    checkPowerOfTwo(num1);
    doubleHalf(num1);

    printf("\nEnter two numbers to swap: ");
    scanf("%d %d", &num1, &num2);

    swapNumbers(&num1, &num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}