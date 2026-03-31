//print array in reverse
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n,temp=0;
    printf("enter size:");
    scanf("%d",&n);
    int *arr=malloc(n*sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("elements in reverse:\n");
    for(int i=n-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    
    for (int i = 0; i < n / 2; i++) 
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    printf("reverse using swaping:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
   
    free(arr);
    return 0;
}