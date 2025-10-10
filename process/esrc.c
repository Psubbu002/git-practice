//process creation and exit status handling
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main() 
{
    pid_t pid = fork();
    if (pid == 0) 
    {
        printf("Child exiting with status 99\n");
        return 99;
    } 
    else 
    {
        int status;
        wait(&status);
        if (WIFEXITED(status))
        {
            printf("Child exit code: %d\n", WEXITSTATUS(status));
        }
    }
    return 0;
}