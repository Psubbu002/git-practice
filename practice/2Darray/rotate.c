//rotate the 2D array by 90 degree(clockwise)(space optimized), and by 90 degree(anticlockwise optimized)
#include <stdio.h>
int main(void)
{
    int a[50][50], n, i, j, t;
    printf("enter size:");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            t=a[i][j]; a[i][j]=a[j][i]; a[j][i]=t;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n/2;j++)
        {
            t=a[i][j]; a[i][j]=a[i][n-1-j]; a[i][n-1-j]=t;
        }
    }
    printf("\n90 degree Clockwise:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++) 
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            t=a[i][j]; a[i][j]=a[j][i]; a[j][i]=t;
        }
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n/2;i++)
        {
            t=a[i][j]; a[i][j]=a[n-1-i][j]; a[n-1-i][j]=t;
        }
    }
    printf("\n90 degree Anticlockwise:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}