#include<stdio.h>
int main()
{
    int mid,high,low,n,found=0,key;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    low=0;
    high=n-1;
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the key element:");
    scanf("%d",&key);
     while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            printf("Element found at %d",mid);
            found=1;
            break;
        }
            
        else if (arr[mid] < key)
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