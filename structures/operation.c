#include <stdio.h>
#include <math.h>  
struct Complex {
    float real;     //real part
    float imag;     //imaginary part
};
void printComplex(const char *label, struct Complex c) {
    printf("%s = %.2f %c %.2fi\n", label, c.real, (c.imag >= 0) ? '+' : '-', fabs(c.imag));
}
int main() {
    struct Complex c1, c2, sum, diff, prod;
    printf("Enter first complex number (real imag): ");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("Enter second complex number (real imag): ");
    scanf("%f %f", &c2.real, &c2.imag);
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    diff.real = c1.real - c2.real;
    diff.imag = c1.imag - c2.imag;
    prod.real = c1.real * c2.real - c1.imag * c2.imag;
    prod.imag = c1.real * c2.imag + c1.imag * c2.real;
    printComplex("\nSum", sum);
    printComplex("Difference", diff);
    printComplex("Product", prod);
    return 0;
}