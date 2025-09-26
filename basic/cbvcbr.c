#include <stdio.h>
void changeValue(int x) {
    x = 10;
}
void change(int *x){
    *x=*x+10;
}
int main( ) {
    int a=8;
    //printf("enter a number:");
    //scanf("%d",&a);
    changeValue(a);
    printf("using call by value a = %d\n", a);  // Output: using call by value a = 8
    change(&a);
    printf("using call by reference a = %d\n", a);  // Output: using call by reference a = 5
    return 0;
}
