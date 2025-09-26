#include <stdio.h>
int main()
{
    int n,key;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 1; i < n; i++) 
    {
        key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("Sorted array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }        
    return 0;
}