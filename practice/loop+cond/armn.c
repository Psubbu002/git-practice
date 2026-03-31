//check armstrong of any digit 
#include <stdio.h>
#include <math.h>
int main(void)
{
    int num, temp, rem, n = 0;
    double res = 0;
    printf("Enter the number:\n");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        temp = temp / 10;
        n++;
    }
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        res += pow(rem, n);
        temp = temp / 10;
    }
    if ((int)res == num) {
        printf("%d is an Armstrong number\n", num);
    }
    else    {
        printf("%d is not an Armstrong number\n", num);
    }
    return 0;
}