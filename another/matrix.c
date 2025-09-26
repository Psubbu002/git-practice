#include <stdio.h>
int main()
{
    int n,m,i,j,k,p;
    printf("Enter row size:");
    scanf("%d",&m);
    printf("Enter column size:");
    scanf("%d",&n);
    printf("Enter the column size for second matrix:");
    scanf("%d",&p);
    int a[m][n];
    int b[n][p];
    int c[m][p];
    printf("Enter the first matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            c[i][j] = 0;
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Multiplication of two matrix :\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}