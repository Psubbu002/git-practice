//check whether the array is palindrome or not
#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int isPalindrome = 1;
    for (int i = 0; i < n / 2; i++) 
    {
        if (arr[i] != arr[n - i - 1]) 
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("Array is a palindrome\n");
    else
        printf("Array is not a palindrome\n");

    free(arr);
    return 0;
}