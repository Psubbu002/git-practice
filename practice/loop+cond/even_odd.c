//To check a number is even or odd
#include <stdio.h>
int main(void)
{
    int a,s;
    printf("Enter the value of A:");
    scanf("%d",&a);
    printf("%s\n",(a%2==0)?"True":"False");
    s=(a%2==0);
    printf("%d\n",s);
    return 0;
}