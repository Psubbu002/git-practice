#include <stdio.h>
#include <stdlib.h>
void printInt(void *data) {
    int *intPtr = (int*)data;
    printf("Value: %d\n", *intPtr);	//Value:42
}
int main() {
    int a = 42;
    void *ptr = &a;  
    printInt(ptr);   
    return 0;
}
