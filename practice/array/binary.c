//convert array elements as 0/1 based on even/odd and find the decimal value of the array
#include <stdio.h>
#include <math.h>
int main(void) 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int binary[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            binary[i] = 0;
        else
            binary[i] = 1;
    }

    printf("Binary representation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", binary[i]);
    }

    int decimal = 0;
    for (int i = 0; i < n; i++) {
        decimal += binary[i] * pow(2, n - i - 1);
    }
    printf("\nDecimal value: %d\n", decimal);
    return 0;
}