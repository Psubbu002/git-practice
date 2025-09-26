#include <stdio.h>
int main() 
{
    int n,m,o;
    printf("Enter the row size:");
    scanf("%d",&m);
    printf("Enter column side:");
    scanf("%d",&n);
    printf("Enter matrix size:");
    scanf("%d",&o);
    int arr[m][n];
    printf("Enter the 2D arra:\n");
    for (int i = 0; i < m; i++)
  	{
  	    for(int j=0;j<n;j++)
  	    {
  	        scanf("%d", &arr[i][j]);
  	    }
  	}
    int (*ptr)[n]=arr;
	printf("2D array\n");
  	for (int i = 0; i < m; i++)
  	{
  	    for(int j=0;j<n;j++)
  	    {
  	        printf("%d\t", ptr[i][j]);
  	    }
  	    printf("\n");
  	}
  	printf("3D array\n");
  	int arr1[m][n][o];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<o;k++)
            {
                scanf("%d",&arr1[i][j][k]);
            }
        }
        printf("\n");
    }
    int (*ptr1)[n][o] = arr1; 
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<2;k++)
            {
                printf("%d",ptr1[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}