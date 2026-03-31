//find the largest sum pairs in the array
#include <stdio.h>
int main(void) 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max1 = arr[0];
    int max2 = arr[1];
    if (max1 < max2) 
    {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }

    for (int i = 2; i < n; i++) 
    {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } 
        else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }
    printf("Largest sum pair: %d and %d\n", max1, max2);
    printf("Maximum sum: %d\n", max1 + max2);
    return 0;
}