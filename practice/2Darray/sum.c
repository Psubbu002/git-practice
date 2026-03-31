//find avg and sum of 2D array elements
#include <stdio.h>
int main(void) 
{
    int rows, cols;
    int arr[100][100];
    int i, j, n;
    int sum = 0;
    float average;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    printf("Enter elements of the array:\n");
    for(i = 0; i < rows; i++) 
    {
        for(j = 0; j < cols; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe 2D array is:\n");
    for(i = 0; i < rows; i++) 
    {
        for(j = 0; j < cols; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < rows; i++) 
    {
        for(j = 0; j < cols; j++) 
        {
            sum += arr[i][j];
        }
    }
    average = (float)sum / (rows * cols);
    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", average);

    printf("\nEnter row number to print (1 to %d): ", rows);
    scanf("%d", &n);
    if(n >= 1 && n <= rows) 
    {
        printf("Row %d: ", n);
        for(j = 0; j < cols; j++) 
        {
            printf("%d ", arr[n-1][j]);
        }
    } 
    else {
        printf("Invalid row number!");
    }

    printf("\nEnter column number to print (1 to %d): ", cols);
    scanf("%d", &n);
    if(n >= 1 && n <= cols) 
    {
        printf("Column %d:\n", n);
        for(i = 0; i < rows; i++) 
        {
            printf("%d\n", arr[i][n-1]);
        }
    } 
    else {
        printf("Invalid column number!");
    }
    return 0;
}