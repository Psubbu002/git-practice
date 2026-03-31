//print square roor of an integer correct upto 2 decimal places
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int n;
    double low = 0, high, mid;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("Invalid\n");
        exit(0);
    }
    else{
        high = n;
        while ((high - low) > 0.00001) 
        {
            mid = (low + high) / 2;
            if (mid * mid > n)
                high = mid;
            else
                low = mid;
        }
        printf("Square root of %d is %.2f\n", n, mid);
    }
    /* double result = sqrt(n);
    printf("Square root of %d is %.2f\n", n, result); */
    return 0;
}