//reverse of array and reverse the string
#include <stdio.h>
#include <string.h>
void reverseArray(int arr[], int start, int end) 
{
    if (start >= end) return;  
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArray(arr, start + 1, end - 1);  
}

void reverseString(char str[], int start, int end) 
{
    if (start >= end) return;  
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);  
}

int main(void) 
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, 0, n - 1);
    printf("Reversed array: ");
    for (int i = 0; i < n; i++)
    { 
        printf("%d ", arr[i]);
    }
    printf("\n");

    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]s", str); 
    int len = strlen(str);
    reverseString(str, 0, len - 1);
    printf("Reversed string: %s\n", str);
    return 0;
}