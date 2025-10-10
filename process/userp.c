#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main() 
{
    pid_t pid;
    printf("Parent process started. PID: %d\n", getpid());
    pid = fork(); // create child process
    if (pid < 0) 
    {
        perror("fork failed");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0) 
    {
        // Child process
        printf("Child process started. PID: %d\n", getpid());
        printf("Child is working...\n");
        sleep(3);  // simulate some work
        printf("Child process finished.\n");
        exit(EXIT_SUCCESS);
    }
    else 
    {
        // Parent process
        printf("Parent is waiting for child to finish...\n");
        wait(NULL);  // wait for child
        printf("Child has finished. Parent exiting.\n");
    }
    return 0;
}
