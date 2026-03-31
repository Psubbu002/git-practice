//print pascal's triangle
#include <stdio.h>
int main(void) 
{
    int rows, i, j, space, value;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++) 
    {
        for (space = 0; space < rows - i - 1; space++) 
        {
            printf(" ");
        }
        value = 1;
        for (j = 0; j <= i; j++) 
        {
            printf("%d ", value);
            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}