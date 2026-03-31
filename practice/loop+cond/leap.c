//year leap or not
#include <stdio.h>
int main(void)
{
    long n;
    printf("Enter the year:");
    scanf("%ld",&n);
    if((n%400==0) || (n%4==0 && n%100!=0))
    {
        printf("N is a leap year\n");
    }
    else{
        printf("not a leap year\n");
    }
    return 0;
}