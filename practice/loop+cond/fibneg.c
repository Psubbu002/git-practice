//Print -ve fibonacci series F(-n) = F(-n+2) - F(-n+1)
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
        temp=b-a;
        b=a;
        a=temp;
    }
    return 0;
}