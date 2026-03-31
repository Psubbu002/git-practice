//find the largest element of the whole 2D array, and largest of each row and column
#include <stdio.h>
int main(void) 
{
    int rows, cols;
    int arr[100][100];
    int i, j;
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

    int largest = arr[0][0];
    for(i = 0; i < rows; i++) 
    {
        for(j = 0; j < cols; j++) 
        {
            sum += arr[i][j];
            if(arr[i][j] > largest) 
            {
                largest = arr[i][j];
            }
        }
    }
    average = (float)sum / (rows * cols);
    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", average);
    printf("Largest element in the whole array = %d\n", largest);

    printf("\nLargest element in each row:\n");
    for(i = 0; i < rows; i++) 
    {
        int row_max = arr[i][0];
        for(j = 1; j < cols; j++) 
        {
            if(arr[i][j] > row_max) 
            {
                row_max = arr[i][j];
            }
        }
        printf("Row %d: %d\n", i + 1, row_max);
    }

    printf("\nLargest element in each column:\n");
    for(j = 0; j < cols; j++) 
    {
        int col_max = arr[0][j];
        for(i = 1; i < rows; i++) 
        {
            if(arr[i][j] > col_max) 
            {
                col_max = arr[i][j];
            }
        }
        printf("Column %d: %d\n", j + 1, col_max);
    }
    return 0;
}