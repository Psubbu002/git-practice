//check whether the given number is within th given range;
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n,low,upper;
    printf("Enter the lower bound:");
    if(scanf("%d",&low)!=1) {
        printf("invalid \n");
        exit(0);
    }
    printf("Enter the upper bound:");
    if(scanf("%d",&upper)!=1){
        printf("invalid\n");
        return 0;
    }
    if(low<=0 || upper<=0) {
        printf("enter valid range\n");
        exit(0);
    }
    else if (low>upper) {
        printf("low should be less than upper\n");
    }
    else    {
        printf("Enter the number to check:");
        if(scanf("%d",&n)!=1) {
            printf("enter valid number\n");
            exit(0);
        }
        if(n>=low && n<=upper) {
            printf("within the range\n");
        }
        else{
            printf("Not in a range\n");
        }
    }
    return 0;
}