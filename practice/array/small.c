//print largest and smallest 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n,i,j,temp=0;
    printf("enter size:");
    scanf("%d",&n);

    int *arr=malloc(n*sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("elements:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    
    printf("max =%d\n",arr[n-1]);
    printf("min=%d\n",arr[0]);
   
    free(arr);
   
    return 0;
}