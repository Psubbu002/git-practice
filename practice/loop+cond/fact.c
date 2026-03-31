//Factorial of a number
#include <stdio.h>
int function(int num);
int factorial(int num)
{
    if(num==0 || num==1)
        return 1;
    return num*factorial(num-1);
}
int main(void)
{
    int n,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    fact=factorial(n);
    printf("factorial of %d is %d\n",n,fact);
    fact=1;
    for(int i=n;i>0;i--)
    {
        fact*=i;
    }
    printf("%d\n",fact);
    return 0;
}