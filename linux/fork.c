#include <stdio.h>
#include <unistd.h>
int main()
{
        printf("HI\n");
        fork();
        fork();
        fork();
        printf("Parent ID=%d Child ID=%d\n",getpid(),getppid());
        while(1);
        return 0;
}