#include <stdio.h>
void toh(int ndisk,char source,char temp,char dest)
{
    if(ndisk==1)
    {
        printf("move disk %d from %c-->%c\n",ndisk,source,dest);
        return;
    }
    toh(ndisk-1,source,dest,temp);
    printf("move disk %d from %c-->%c\n",ndisk,source,dest);
    toh(ndisk-1,temp,source,dest);  //end of tail
}

int main(void)
{
    char source='A', temp='B',dest='C';
    int ndisk;
    printf("enter the number of disks:\n");
    scanf("%d",&ndisk);
    printf("sequence is :\n");
    toh(ndisk,source,temp,dest);
    return 0;
}