//power set of a unique array [2^n-1]
#include <stdio.h>
#include <math.h>
int main(void) 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements (unique):\n");
    for (int i = 0; i < n; i++) 
    {
       scanf("%d", &arr[i]);
    }

    int total = pow(2, n);
    printf("Power set:\n");
    for (int i = 0; i < total; i++) 
    {
        printf("{ ");
        for (int j = 0; j < n; j++) 
        {
            if (i & (1 << j)) {
                printf("%d ", arr[j]);
            }
        }
        printf("}\n");
    }
    return 0;
}