//print x^y
#include <stdio.h>
int main(void)
{
    int x,y,result=1;
    printf("enter the base/X value:");
    scanf("%d",&x);
    printf("Enter the power/Y value:");
    scanf("%d",&y);
    for(int i=1;i<=y;i++)
    {
        result*=x;
    }
    //double result=pow(x,y);
    printf("%d ^ %d=%d\n",x,y,result);
    return 0;
}