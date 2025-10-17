#include <stdio.h>
#include <unistd.h>
int main()
{
        for(int i=0;i<3;i++)
        {
                if(fork()==0)
                {
                        printf("PID=%d\tPPID=%d\n",getpid(),getppid());
                }
                else
                break;
        }
        return 0;
}
