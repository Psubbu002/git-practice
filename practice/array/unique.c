//check unique or not
#include <stdio.h>
void sort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
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
    sort(arr, n);
    int isUnique = 1;
    for (int i = 0; i < n - 1; i++) 
    {
        if (arr[i] == arr[i + 1]) 
        {
            isUnique = 0;
            break;
        }
    }
    if (isUnique)
        printf("Array elements are unique\n");
    else
        printf("Array elements are not unique\n");
    return 0;
}