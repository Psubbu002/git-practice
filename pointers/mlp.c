#include <stdio.h>
int main() 
{
    int var = 10;
    int *ptr1 = &var;
    int **ptr2 = &ptr1;  
    printf("var: %d\n", var);        //10     
    printf("*ptr1: %d\n", *ptr1);   //10
    printf("**ptr2: %d", **ptr2);  //10
    return 0;
}
