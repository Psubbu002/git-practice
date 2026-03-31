//possible pairs from the array whose sum is given by the user
#include <stdio.h>
int main(void) 
{
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("Pairs with sum %d:\n", target);
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] + arr[j] == target) 
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}
