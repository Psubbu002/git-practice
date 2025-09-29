#include <stdio.h>
unsigned long long fibonacci(int n) 
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() 
{
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if(n<0)
    {
        printf("Enter a positive number:");
    }
    printf("Fibonacci Series up to %d terms:\n", n);
    for (i = 0; i < n; i++) 
    {
        printf("%llu ", fibonacci(i));
    }
    printf("\n");
    return 0;
}