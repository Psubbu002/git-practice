//2 power series
#include <stdio.h>
int powerOfTwo(int n) 
{
    if (n == 0) return 1;          
    return 2 * powerOfTwo(n - 1);  
}

int sumPowerOfTwo(int n) 
{
    if (n < 0) return 0;  
    return powerOfTwo(n) + sumPowerOfTwo(n - 1);
}

int main(void) 
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("2^0 to 2^%d series: ", n);
    for (int i = 0; i <= n; i++) 
    {
        printf("%d ", powerOfTwo(i));
    }
    int sum = sumPowerOfTwo(n);
    printf("\nSum of series = %d\n", sum);
    return 0;
}