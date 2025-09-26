#include<stdio.h>
int main()	        
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
	int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
	int *ptr=arr;
	printf("the first value: %d\n",*ptr);	 //prints the value 1
    printf("The elements:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",*ptr); 	//print the values 1,2,3,4
		ptr++;
	}
	printf("address :%d\n",(void*)ptr); 		
	return 0;
}
