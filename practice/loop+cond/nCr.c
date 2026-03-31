//find combination of nCr=(n!)/(r!)*(n-r)!
#include <stdio.h>
#include <stdlib.h>
int factorial(int num)
{
    if(num==0 || num==1)
        return 1;
    return num*factorial(num-1);
}
int main(void){
    int n,r;
    printf("Enter n and r values:");
    scanf("%d %d",&n,&r);
    if(r>n || n<0 || r<0)
    {
        printf("invalid\n");
        exit(0);
    }
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("nCr=%d\n",ncr);

    #if(0)
    long long res=1;
     if(r > n - r)
        r = n - r;
    for(int i = 0; i < r; i++)
    {
        res = res * (n - i) / (i + 1);
    }
    printf("%lld\n",res);
    #endif
    
    return 0;
}