#include<stdio.h>
void reverseNum(int n, int *rev)
{
    if(n==0)return;
    int rem=n%10;
    *rev = *rev * 10 + rem;
    int q=n/10;
    reverseNum(q,rev);
}
int main()
{
    int n,q,rem,rev=0;
    printf("Enter a number:");
    scanf("%d",&n);
    reverseNum(n,&rev);
    printf("Reversed number is %d",rev);
    return 0;
}