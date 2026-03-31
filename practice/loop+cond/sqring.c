//Print square ring pattern
#include <stdio.h>
int main(void) 
{
    int n, i, j;
    char ch = '*';
    printf("Enter the size of the square: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("%c ", ch);
            else
                printf("  ");
        }
        printf("\n");
    }
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            int top = i;
            int left = j;
            int right = size - 1 - j;
            int bottom = size - 1 - i;

            int min = top;
            if (left < min) min = left;
            if (right < min) min = right;
            if (bottom < min) min = bottom;
            printf("%d ", n - min);
        }
        printf("\n");
    }
    return 0;
}