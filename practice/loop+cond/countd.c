//count number of digits in a number
#include <stdio.h>
int main(void)
{
    int num,count=0;
    printf("enter a number:");
    scanf("%d",&num);
    if(num==0){
        count=1;
    }
    else{
        while(num!=0)
        {
            num=num/10;
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}