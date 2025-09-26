#include <stdio.h>
int main() {
    int n, i, j, sum;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Perfect numbers up to %d are: ", n);
    for(i = 2; i <= n; i++) {
        sum = 1;  
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0)
                sum += j;
            }
        if(sum == i)
            printf("%d ", i);
        }
    return 0;
}