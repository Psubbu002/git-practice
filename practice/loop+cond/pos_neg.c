//Check the number is +ve/-ve/0
#include <stdio.h>
int main(void)
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("%s\n", (a == 0) ? "Equal to 0" : (a > 0) ? "Positive" : "Negative");
    return 0;
}