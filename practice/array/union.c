//find union of 2 arrays
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
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++) 
    {
        scanf("%d", &arr2[i]);
    }

    int arr[n1 + n2];
    int k = 0;
    for (int i = 0; i < n1; i++) 
    {
        arr[k++] = arr1[i];
    }
    for (int i = 0; i < n2; i++) 
    {
        arr[k++] = arr2[i];
    }
    sort(arr, n1 + n2);
    
    printf("Union of arrays:\n");
    for (int i = 0; i < n1 + n2; i++) 
    {
        if (i == 0 || arr[i] != arr[i - 1]) 
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}