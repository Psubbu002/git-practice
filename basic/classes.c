#include <stdio.h>
int c=30;
void count()
{
    static int b=10;
    b++;
    printf("Static variable:%d\n",b);
}
void ext()
{
    printf("External variable:%d",c);
}
int main()
{
    auto int a=10;
    printf("Auto variable :%d\n",a);
    count();
    count();
    register int i;
    printf("Register:\n");
    for(i=2;i<5;i++)
    {
        printf("%d\n",i*2);
    }
    ext();
    return 0; 
}