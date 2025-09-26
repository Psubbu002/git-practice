#include <stdio.h>
int main() 
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);  
    }
    int *ptr = arr;  
    printf("Array elements using pointer:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", ptr[i]);  
    }
    printf("\n");
    printf("Address of ptr      : %p\n", (void*)ptr);
    printf("Value at *ptr       : %d\n", *ptr);
    printf("Address of arr      : %p\n", (void*)arr);
    printf("Value at *arr       : %d\n", *arr);

    printf("Sizes:\n");
    printf("sizeof(*ptr)   = %zu\n", sizeof(*ptr));   // size of int
    printf("sizeof(ptr)    = %zu\n", sizeof(ptr));    // size of int* (depends on system: 4 or 8 bytes)
    printf("sizeof(*arr)   = %zu\n", sizeof(*arr));   // size of int
    printf("sizeof(arr)    = %zu\n", sizeof(arr));    // size of full array in bytes
    return 0;
}