#include<stdio.h>
int main()
{
    int n,q,rem,product=1;
    printf("Enter a Number: ");
    scanf("%d",&n);
    if(n == 0) 
    {
        product = 0;   // special case
    } 
    else 
    {
        if(n < 0) n = -n;  // handle negative numbers
        q = n;
        while(q != 0)
        {
            rem = q % 10;
            product *= rem;
            q = q / 10;
        }
    }
    printf("Product is %d", product);
    return 0;
}