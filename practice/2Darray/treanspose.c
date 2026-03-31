//transpose of 2D array using func(without extra space)
#include <stdio.h>
void transpose(int arr[100][100], int n) 
{
    int i, j, temp;
    for(i = 0; i < n; i++) 
    {
        for(j = i + 1; j < n; j++) 
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

int main(void) 
{
    int n;
    int arr[100][100];
    int i, j;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nOriginal matrix:\n");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    transpose(arr, n);
    printf("\nTransposed matrix:\n");
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