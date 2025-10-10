#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main() 
{
    pid_t pid = fork();
    if (pid < 0) 
    {
        perror("fork failed");
        exit(1);
    }
    if (pid == 0) 
    {
        // Child process exits immediately
        printf("Child process (PID %d) exiting.\n", getpid());
        exit(0);
    } 
    else 
    {
        // Parent process sleeps without calling wait()
        printf("Parent process (PID %d) sleeping. Child PID: %d\n", getpid(), pid);
        printf("Child will become zombie until parent terminates or calls wait().\n");
        // Sleep long enough to check the zombie in another terminal
        sleep(30);
        printf("Parent exiting.\n");
    }
    return 0;
}
