#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    *ptr = 42;
    printf("Value: %d\n", *ptr);
    free(ptr);
     //ptr=NULL;   
    free(ptr);   
    return 0;
}
