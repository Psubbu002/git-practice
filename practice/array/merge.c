//merge second array into first array
#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int *arr1=malloc(n1*sizeof(int));
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    
    int *arr2=malloc(n2*sizeof(int));
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n2; i++)   {
        arr1[n1 + i] = arr2[i];
    }
    printf("Merged array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", arr1[i]);
    }

    free(arr1);
    free(arr2);
    return 0;
}