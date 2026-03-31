//Print N natural numbers
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n;
    printf("Enter the natural number\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Enter positive number greater than 0\n");
        exit(0);
    }
    else
    {
        printf("N natural numbers:\n");
        for(int i=1;i<=n;i++)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}