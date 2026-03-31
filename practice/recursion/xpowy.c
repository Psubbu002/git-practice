//x^y
#include <stdio.h>
double power(double x, int y) 
{
    if (y == 0) 
        return 1;       
    if (y > 0) 
        return x * power(x, y - 1); 
    return 1 / power(x, -y);
}

int main(void) 
{
    double x;
    int y;
    printf("Enter base x: ");
    scanf("%lf", &x);
    printf("Enter exponent y: ");
    scanf("%d", &y);
    double result = power(x, y);
    printf("%.2lf^%d = %.2lf\n", x, y, result);
    return 0;
}