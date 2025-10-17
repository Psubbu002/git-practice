#include <stdio.h>
#include <unistd.h>
int main()
{
        printf("hi\n");
        for(int i=0;i<3;i++)
        {
                if(fork())
                {
                        printf("1=%d\tPID=%d\tPPID=%d\n",i,getpid(),getppid());
                }
                else
                ;
        }
        while(1);
        return 0;
}