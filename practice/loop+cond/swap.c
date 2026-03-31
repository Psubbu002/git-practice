//swap two numbers
#include <stdio.h>
int main(void){
    int a,b,temp;
    printf("enter a and b values:");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("with third variable %d %d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("without  third variable %d %d\n",a,b);

    a=a^b;
    b=a^b;
    a=a^b;
    printf("with XOR %d %d\n",a,b);
    return 0;
}