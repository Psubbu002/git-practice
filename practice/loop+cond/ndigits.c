//print N natural numbers without loop statemnt
#include <stdio.h>
void printNumbers(int n)
{
    if (n == 0)
        return;
    printNumbers(n - 1);   
    printf("%d ", n);      
}
int main(void)
{
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Natural numbers from 1 to %d:\n", n);
    printNumbers(n);
    return 0;
}