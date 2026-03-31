//print table of a given number upto limit
#include <stdio.h>
int main(void)
{
    int n,l,res;
    printf("enter the number:");
    scanf("%d",&n);
    printf("enter limit:");
    scanf("%d",&l);
    for(int i=1;i<=l;i++)
    {
        res=n*i;
        printf("%d * %d = %d\n",n,i,res);
    }
    return 0;
}