//find the size of the variable without using sizeof() operator
#include <stdio.h>
int main(void) 
{
    int a;
    char b;
    double c;
    printf("Size of int = %ld bytes\n", (char*)(&a+1)-(char*)(&a));
    printf("Size of char = %ld byte\n", (char*)(&b+1)-(char*)(&b));
    printf("Size of double = %ld bytes\n", (char*)(&c+1)-(char*)(&c));
    return 0;
}