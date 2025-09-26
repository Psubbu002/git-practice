#include <stdio.h>
int main()
{
    int n,index=0,temp=0,swapped;
    printf("Enter the size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sorted array:\n");
     for (int i = 0; i < n - 1; i++) 
     {
        swapped = 0;  
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped)
            break;
     }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }        
    return 0;
}
