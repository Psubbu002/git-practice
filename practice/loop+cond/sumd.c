//sum of digits of a given number
#include <stdio.h>
int main(void)
{
    int num,rem=0,sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum+=rem;
        num=num/10;
    }
        printf("%d\n",sum);
    return 0;
}