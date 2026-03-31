//check number is perfect or not
#include <stdio.h>
int main(void)
{
    int num,res=0,l;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            res+=i;
        }
    }
    if(res==num){
        printf("perfect\n");
    }
    else{
        printf("not\n");
    }
    return 0;
}