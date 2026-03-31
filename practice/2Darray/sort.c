//reverse each row of 2D arrey, and reverse each column of 2D array, and sort each row of 2D array(asc/des)
#include <stdio.h>
int main(void) 
{
    int a[100][100], r, c, i, j, k, temp;
    printf("Enter rows and cols: ");
    scanf("%d%d", &r, &c);
    printf("enter the elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c/2;j++) 
        {
            temp = a[i][j];
            a[i][j] = a[i][c-1-j];
            a[i][c-1-j] = temp;
        }
    }
    printf("\nRow reversed:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    for(j=0;j<c;j++){
        for(i=0;i<r/2;i++) 
        {
            temp = a[i][j];
            a[i][j] = a[r-1-i][j];
            a[r-1-i][j] = temp;
        }
    }
    printf("\nColumn reversed:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c-1;j++)
        {
            for(k=j+1;k<c;k++)
            {
                if(a[i][j] > a[i][k]) 
                {
                    temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
            }
        }
    }
    printf("\nRows sorted (ASC):\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}