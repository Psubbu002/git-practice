#include <stdio.h>
int main()
{
    int a;
    printf("Enter the element:");
    scanf("%d",&a);
    int *ptr=&a;
    printf("%d\n",*ptr);	//print the value 10
    printf("%d\n",ptr);	//print the address -251188156
    printf("%d\n",a);	//print the value 10
    return 0;
}