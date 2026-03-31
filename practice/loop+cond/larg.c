//Largest of N elements without using an array
#include <stdio.h>
int main(void)
{
    int n, num, largest;
    printf("Enter how many numbers (N): ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }
    printf("Enter number 1: ");
    scanf("%d", &num);
    largest = num;
    for (int i = 2; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > largest)
        {
            largest = num;
        }
    }
    printf("Largest number = %d\n", largest);
    return 0;
}