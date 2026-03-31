//check a 3-digit number is armstrong or not
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num,res=0,rem,temp;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if(num<100 || num>999)
    {
        printf("invalid\n");
        exit(0);
    }
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        res+=rem*rem*rem;
        num=num/10;
    }
    if(temp==res){
        printf(" %d is an Armstrong \n",res);
    }
    else{
        printf("%d is not an Armstrong\n",res );
    }
    return 0;
}