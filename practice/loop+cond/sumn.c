//Sum of N natural numbers
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    if(n<0){
        printf("Enter positive number\n");
        exit(0);
    }
    else{
        for(int i=1;i<=n;i++)
        {
            sum+=i;
        }
        printf("Sum of %d natural numbers is %d\n",n,sum);
    }
}