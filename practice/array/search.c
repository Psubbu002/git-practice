//search an element
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n,key,found=0;
    printf("enter size:");
    scanf("%d",&n);
    int *arr=malloc(n*sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter key element:");
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            found=1;
            break;
        }
    }
    if(found==1) {
        printf("element available\n");
    }
    else{
        printf("not available\n");
    }
    free(arr);
    return 0;
}