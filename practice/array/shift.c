//shift all 0's to the left side os the array and keeping other side same order
#include <stdio.h>
int main(void) 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int j = n - 1;  
    for (int i = n - 1; i >= 0; i--) 
    {
        if (arr[i] != 0) 
        {
            arr[j] = arr[i];
            j--;
        }
    }
    while (j >= 0) 
    {
        arr[j] = 0;
        j--;
    }
    printf("Array after shifting zeros to left:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}