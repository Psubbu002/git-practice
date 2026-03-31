//Find largest/smallest of three numbers
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b,c;
    char max,min;
    printf("Enter the three values:");
    if(scanf("%d %d %d",&a,&b,&c)!=3)
    {
        printf("invalid input\n");
        exit(0);
    }
    if((a<0)||(b<0)||(c<0))
    {
        printf("Enter positive numebers\n");
        exit(0);
    }
    else if(a==b && b==c)
    {
        printf("All are same\n");
        exit(0);
    }
    else
    {
        printf("The largest number is :%c\n",(a>b && a>c)?'A':(b>a && b>c)?'B':'c');
        printf("The smallest  number is %c\n",(a<b && a<c)?'A':(b<a && b<c)?'B':'C');
    }
    return 0;
}