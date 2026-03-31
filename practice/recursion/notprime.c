//reverse n natural numbers except prime numbers
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n) 
{
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
            return false;
    }
    return true;
}

void reverseNonPrimes(int n) 
{
    if (n == 0) return;            
    if (!isPrime(n)) 
        printf("%d ", n); 
    reverseNonPrimes(n - 1);         
}

int main(void) 
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Reverse natural numbers (excluding primes):\n");
    reverseNonPrimes(n);  
    printf("\n");
    return 0;
}