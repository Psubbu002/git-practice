#include <stdio.h>
#include <unistd.h>
static int a=10;
int main()
{
        int b=20;
        int pid;
        printf("hi\n");
        pid=fork();
        if(pid==0)
        {
                printf("Child ID=%d,Parent ID=%d\n",getpid(),getppid());
                printf("a=%d,b=%d\n",a,b);
                a=2*a;
                b=2*b;
                printf("a=%d,b=%d\n\n",a,b);
        }
        else
        {
                printf("In parent\nPID=%d,PPID=%d",getpid(),getppid());
                printf("a=%d,b=%d\n",a,b);
                a=3*a;
                b=3*b;
                printf("a=%d,b=%d\n",a,b);
        }
        sleep(1);
        return 0;
}

