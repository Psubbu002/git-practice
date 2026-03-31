//Nth largest /Smallest element of the array
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
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter value of N (k): ");
    scanf("%d", &k);
    if (k <= 0 || k > n) 
    {
        printf("Invalid value of N\n");
        return 0;
    }

    sort(arr, n);
    
    printf("\n");
    printf("Nth smallest element: %d\n", arr[k - 1]);
    printf("Nth largest element: %d\n", arr[n - k]);
    return 0;
}