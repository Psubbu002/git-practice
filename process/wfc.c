#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main() 
{
    pid_t pid = fork();
    if (pid == 0) 
    {
        printf("Child PID: %d is working...\n", getpid());
        sleep(2);
        return 42;  // Exit code
    } 
    else 
    {
        int status;
        wait(&status);  // Wait for child
        printf("Parent: Child exited with status %d\n", WEXITSTATUS(status));
    }
    return 0;
}
