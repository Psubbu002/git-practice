#include <stdio.h>
int main() 
{
    int a = 90;
    int b = 50;
    const int *ptr = &a;
    printf("Address ptr points to: %p\n", (void*)ptr);
    printf("Value at ptr: %d\n", *ptr);
    ptr = &b;  
    printf("Address ptr now points to: %p\n", (void*)ptr);
    printf("Value at ptr: %d\n", *ptr);
    //*ptr = 100; // ❌ Uncommenting this will cause compile error
    return 0;
}