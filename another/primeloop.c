 #include<stdio.h>
int main()
{
    int n,i,isprime=1;
    printf("Enter a Number:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            isprime=0;
            break;
        }
    }
    if(isprime)
    {
        printf("%d is Prime", n);
    }
    else
    {
         printf("%d is not a prime",n);
   }
    return 0;
 }