//reverse each element of the array at their index
#include <stdio.h>
int reverseNumber(int num) 
{
    int rev = 0;
    while (num != 0) 
    {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    return rev;
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

    printf("Array after reversing each element:\n");
    for (int i = 0; i < n; i++) 
    {
        arr[i] = reverseNumber(arr[i]);
        printf("%d ", arr[i]);
    }
    return 0;
}