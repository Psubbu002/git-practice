//peint frequenct of each element of array
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
    int count = 1;
    for (int i = 0; i < n; i++) 
    {
        if (i < n - 1 && arr[i] == arr[i + 1]) {
            count++;
        } 
        else {
            printf("%d occurs in  %d times\n", arr[i], count);
            count = 1;
        }
    }
    return 0;
}