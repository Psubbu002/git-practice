//print positive fibonacci series
#include <stdio.h>
int main(void)
{
    int a,b,n,temp;
   a=0;
    b=1;
    printf("enter limit:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a);
        temp=a+b;
        a=b;
        b=temp;
    }
    return 0;
}