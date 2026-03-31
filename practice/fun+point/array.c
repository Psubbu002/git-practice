//array using function
#include <stdio.h>
void array1(int arr[],int num)
{
    for(int i=0;i<num;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main(void)
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements are:\n");
    array1(arr, n);  
    return 0;
}