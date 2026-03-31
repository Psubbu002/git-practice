//print N prime numbers
#include <stdio.h>
int main(void)
{
    int n, count = 0, num = 2, i, isPrime;
    printf("Enter N: ");
    scanf("%d", &n);
    while (count < n)
    {
        isPrime = 1;
        for (i = 2; i * i <= num; i++)
        {
            if (num % i == 0)    {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)        {
            printf("%d\n", num);
            count++;
        }
        num++;
    }
    return 0;
}