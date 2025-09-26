#include<stdio.h>
int fact(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int n,q,rem,res=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        rem=q%10;
        res+=fact(rem);
        q=q/10;
    }
    if(res==n)
    {
        printf("%d is a strong number.",n);
    }
    else{
        printf("%d is not a strong Number.",n);
    }
    return 0;
}