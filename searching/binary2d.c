#include<stdio.h>
int main()
{
    int mid,high,low,n,m,found=0,key;
    printf("Enter the row size:");
    scanf("%d",&m);
    printf("Enter column size:");
    scanf("%d",&n);
    int arr[m][n];
    low=0;
    high=m*n-1;
    printf("Enter the elements:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the key element:\n");
    scanf("%d",&key);
     while (low <= high) {
        int mid = (low + high) / 2;
        int i = mid / n; 
        int j = mid % n; 
        if (arr[i][j] == key)
        {
            printf("Element found at (%d,%d)",i,j);
            found=1;
            break;
        }
        else if (arr[i][j] < key)
        {
             low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
     }
    if (!found) {
        printf("Element not found\n");
    }
    return 0;
}