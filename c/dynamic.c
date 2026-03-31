#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int rows,cols;
    printf("Enter row size:");
    scanf("%d",&rows);
    printf("Enter col size:");
    scanf("%d",&cols);
    int (*arr)[cols];
    arr=malloc(rows*sizeof(int));
    printf("the values are:\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            arr[i][j]=i+j;
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}