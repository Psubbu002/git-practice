#include <stdio.h>
#include <stdlib.h>
int main()
{
    //int *ptr=NULL; 	//Prints memory allocation failed
   	int* ptr = (int*)malloc(sizeof(int));	//prints memory allocated successfully
   	if (ptr == NULL)
    {
      	printf("Memory Allocation Failed");
    	exit(0);
   	}
   	else
    {
        printf("Memory Allocated successfully");
   	}
   	return 0;
}