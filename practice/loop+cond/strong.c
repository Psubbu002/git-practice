//strong or not
#include <stdio.h>
int factorial(int num)
{
    if(num==0 || num==1)
        return 1;
    return num*factorial(num-1);
}
int main(void)
{
    int n,temp,rem,res=0;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        res+=factorial(rem);
        n=n/10;
    }
    if(temp==res){
        printf("perfect\n");
    }
    else{
        printf("not \n");
    }
    return 0;
}