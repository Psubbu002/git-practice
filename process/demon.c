#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
int main() 
{
    pid_t pid = fork();
    if (pid < 0) 
    {
        perror("fork failed");
        exit(1);
    }
    if (pid > 0) 
    {
        printf("Parent exiting. Child PID: %d\n", pid);
        exit(0);
    }
    if (setsid() < 0) 
    {
        perror("setsid failed");
        exit(1);
    }
    if (chdir("/") < 0) 
    {
        perror("chdir failed");
        exit(1);
    }
    while (1) 
    {
        FILE *f = fopen("/tmp/daemon.log", "a+");
        if (f) 
        {
            fprintf(f, "Daemon running, PID: %d\n", getpid());
            fclose(f);
        } 
        else 
        {
            perror("fopen failed");
        }
        sleep(5);
    }
    return 0;
}
