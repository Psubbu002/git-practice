#include <stdio.h>
int main() {
    int arr[20];
    int n;
    printf("Enter the size of the element:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p = arr;
    printf("First element: %d\n", *p);       
    printf("Second element: %d\n", *(p + 1)); 
    p++;  
    printf("Now p points to: %d\n", *p);    
    p = p + 2;
    printf("Now p points to: %d\n", *p);  
    int diff = p - arr;
    printf("Index pointed by p: %d\n", diff);  
    return 0;
}
