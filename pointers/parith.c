#include <stdio.h>
int main() 
{
    int arr[20];
    int n;
    printf("Enter the size of the element:");
    scanf("%d",&n);                             //3
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);                //1 2 3
    }
    int *p = arr;
    printf("First element: %d\n", *p);       //1
    printf("Second element: %d\n", *(p + 1)); //2
    p++;  
    printf("Now p points to: %d\n", *p);    //2
    p = p + 2;
    printf("Now p points to: %d\n", *p);  //a[3]=garbage value
    int diff = p - arr;
    printf("Index pointed by p: %d\n", diff);  //a[3]-a[0]=3
    return 0;
}
