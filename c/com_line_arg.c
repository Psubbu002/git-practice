#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
    int sum=0;
    printf("argc=%d\n",argc);
    for(int i=0;i<argc;i++)
    {
        printf("argv[%d]=%s\n",i,argv[i]);
    }
    printf("\n");
    for(int i=1;i<argc;i++)
    {
        sum=sum+atoi(argv[i]);
    }
    printf("%d\n",sum);
    return 0;
}
