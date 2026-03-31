//FIndthe largest/smallest of two numbers
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b;
    printf("Enter a and b values:\n");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input! Please enter only numbers.\n");
        exit(0);
    }
    if ((a<0)||(b<0))
    {
        printf("Enter positive numbers\n");
        exit(0);
    }
    else if(a==b) 
    {
        printf("Both are same\n");
        exit(0);
    }
    else 
    {
        printf("The largest number is %c\n",(a>b) ? 'a' : 'b');
        printf("The smallest number is %c\n",(a<b) ? 'a' : 'b');
    }
    return 0;
}