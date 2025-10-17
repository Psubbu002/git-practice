#include <stdio.h>
int sum(int i, int j);
int mul(int i,int j);
int main()
{
    int r;
    printf("hello\n");

    r=sum(10,9);
    printf("r=%d\n",r);

    r=mul(10,20);
    printf("r=%d\n",r);
    return 0; 
}
