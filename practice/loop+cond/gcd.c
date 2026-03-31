//print GCD/HCF of two numbers
#include <stdio.h>
int main(void)
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("GCD (HCF) = %d\n", a);
    return 0;
}