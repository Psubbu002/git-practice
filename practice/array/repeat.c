//print only unique and only repeated elements
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
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    printf("Unique elements:\n");
    for (int i = 0; i < n; i++) 
    {
        if ((i == 0 || arr[i] != arr[i - 1]) && (i == n - 1 || arr[i] != arr[i + 1])) 
            {
            printf("%d ", arr[i]);
        }
    }
    printf("\nRepeated elements:\n");
    for (int i = 0; i < n; i++) {
        if (i < n - 1 && arr[i] == arr[i + 1]) 
        {
            printf("%d ", arr[i]);
            while (i < n - 1 && arr[i] == arr[i + 1]) 
            {
                i++;
            }
        }
    }
    return 0;
}