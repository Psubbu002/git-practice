#include<stdio.h>
int main()
{
    int n,q,rem,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        rem=q%10;
        sum+=rem;
        q=q/10;
    }
    printf("Sum is %d",sum);
     return 0;
}