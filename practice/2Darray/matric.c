//sum of 2 matrices and multiplication of 2 matrices[where c1=r2]
#include <stdio.h>
int main(void) 
{
    int r1, c1, r2, c2;
    int A[100][100], B[100][100], sum[100][100], mul[100][100];
    int i, j, k;
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < r1; i++) 
    {
        for(j = 0; j < c1; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);
    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < r2; i++) 
    {
        for(j = 0; j < c2; j++) 
        {
            scanf("%d", &B[i][j]);
        }
    }

    if(r1 == r2 && c1 == c2) 
    {
        printf("\nSum of matrices:\n");
        for(i = 0; i < r1; i++) 
        {
            for(j = 0; j < c1; j++) 
            {
                sum[i][j] = A[i][j] + B[i][j];
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }
    } 
    else {
        printf("\nMatrix addition not possible (sizes must be same).\n");
    }

    if(c1 == r2) 
    {
        for(i = 0; i < r1; i++) 
        {
            for(j = 0; j < c2; j++) 
            {
                mul[i][j] = 0;
            }
        }
        for(i = 0; i < r1; i++) 
        {
            for(j = 0; j < c2; j++) 
            {
                for(k = 0; k < c1; k++) 
                {
                    mul[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        printf("\nMultiplication of matrices:\n");
        for(i = 0; i < r1; i++) 
        {
            for(j = 0; j < c2; j++) 
            {
                printf("%d ", mul[i][j]);
            }
            printf("\n");
        }
    } 
    else {
        printf("\nMatrix multiplication not possible (c1 must equal r2).\n");
    }
    return 0;
}