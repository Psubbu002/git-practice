//Print 2 Power series
#include <stdio.h>
int main(void)
{
    int n;
    printf("enter the range:");
    scanf("%d",&n);
    printf("The power series of 2\n");
    int value=1;
    for(int i=0;i<n;i++)
    {
        printf("%d\n",value);
        value*=2;
    }
    return 0;
}