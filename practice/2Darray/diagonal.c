//print both diagonal of 2D array in X pattern format[square type], and both diagonal elements normally[square type],find the sum of both diagonal elements , and swap both diagonal elements[sqyare types]
#include <stdio.h>
int main(void) 
{
    int n;
    int arr[100][100];
    int i, j;
    int sum_primary = 0, sum_secondary = 0;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nX pattern:\n");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            if(i == j || i + j == n - 1) 
            {
                printf("%d ", arr[i][j]);
            } 
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\nPrimary diagonal:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i][i]);
        sum_primary += arr[i][i];
    }

    printf("\nSecondary diagonal:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i][n - 1 - i]);
        sum_secondary += arr[i][n - 1 - i];
    }
    printf("\n\nSum of primary diagonal = %d", sum_primary);
    printf("\nSum of secondary diagonal = %d", sum_secondary);

    int total_sum = sum_primary + sum_secondary;
    if(n % 2 == 1) 
    {
        total_sum -= arr[n/2][n/2];
    }
    printf("\nTotal sum of both diagonals = %d\n", total_sum);

    for(i = 0; i < n; i++) 
    {
        int temp = arr[i][i];
        arr[i][i] = arr[i][n - 1 - i];
        arr[i][n - 1 - i] = temp;
    }
    printf("\nMatrix after swapping diagonals:\n");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}