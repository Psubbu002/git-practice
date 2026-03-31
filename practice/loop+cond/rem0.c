//remove 0 from the given number
#include <stdio.h>
int main(void)
{
    int num, rem, res = 0, multiplier = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        if (rem != 0)
        {
            res = res + rem * multiplier;
            multiplier = multiplier * 10;
        }
        num = num / 10;
    }
    printf("Number after removing 0s = %d\n", res);
    return 0;
}