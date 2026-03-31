//=vs fibonacci serie
#include <stdio.h>
void fibonacci(int a, int b, int n) 
{
    if (n == 0) return;          
    printf("%d\t", a);           
    fibonacci(b, a + b, n - 1);  
}

int main(void) 
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Fibonacci series:\n");
    fibonacci(0, 1, n);          
    printf("\n");
    return 0;
}