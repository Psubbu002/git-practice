//print sum/avg of elements
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n;
    printf("enter size:");
    scanf("%d",&n);
    int *arr=malloc(n*sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    float avg=(float)sum/n;
    printf("sum of elements:%d\n",sum);
    printf("avg is %f\n",avg);
    free(arr);
    return 0;
}