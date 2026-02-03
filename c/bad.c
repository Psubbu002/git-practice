#include <stdio.h>
int *bud()
{
    int x=5;
    return &x;
}
int main()
{
    int *p=bud();
    printf("%d\n",*p);
    return 0;
}