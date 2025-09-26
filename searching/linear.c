#include <stdio.h>
int main()
{
    int n,key,found;
    int arr[100];
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter searching element:");
    scanf("%d",&key);
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;  
        }
    }
    if (!found) {
        printf("Element not found\n");
    }
    return 0;
}