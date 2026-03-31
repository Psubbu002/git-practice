//print Arithmetic Progression [a,a+d,a+2d,] and Geometric Progression[a,ar,ar2,ar3] series
#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, d, r, n;
    printf("Enter first term (a): ");
    scanf("%d", &a);
    printf("Enter common difference (d) for AP: ");
    scanf("%d", &d);
    printf("Enter common ratio (r) for GP: ");
    scanf("%d", &r);
    printf("Enter number of terms (n): ");
    scanf("%d", &n);
    printf("\nAP Series:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a + i * d);
    }
    printf("\n\nGP Series:\n");
    int term = a;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", term);
        term = term * r;
    }
    return 0;
}