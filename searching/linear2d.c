#include <stdio.h>
int main()
{
    int n,m,key,found=0;
    printf("Enter  row size:");
    scanf("%d",&m);
    printf("Enter column  size:");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the elements:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter searching element:");
    scanf("%d",&key);
    for (int i = 0; i < m; i++)
     {
        for(int j=0;j<n;j++)
        {
            if (arr[i][j] == key) 
            {
                printf("Element found at index (%d,%d) \n",i,j);
                found = 1;
                break;  
            }
        }
        if(found)
        {
            break;
        }
     }
    if (!found) 
    {
        printf("Element not found\n");
    }
    return 0;
}