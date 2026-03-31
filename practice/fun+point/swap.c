//swap two values of any type
#include <stdio.h>
#include <string.h>
#define SWAP(a, b) { \
    typeof(a) temp = a; \
    a = b; \
    b = temp; \
}
void swap(void *a, void *b, size_t size) 
{
    char temp[size];
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
}

int main(void) 
{
    int x = 10, y = 20;
    double p = 1.5, q = 2.5;
    swap(&x, &y, sizeof(int));
    swap(&p, &q, sizeof(double));
    printf("x = %d, y = %d\n", x, y);
    printf("p = %.2f, q = %.2f\n", p, q);

    char c1 = 'A', c2 = 'B';
    SWAP(x, y);
    SWAP(p, q);
    SWAP(c1, c2);
    printf("x = %d, y = %d\n", x, y);
    printf("p = %.2f, q = %.2f\n", p, q);
    printf("c1 = %c, c2 = %c\n", c1, c2);
    return 0;
}