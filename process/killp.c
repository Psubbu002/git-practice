#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
int main() 
{
    pid_t pid = fork();  
    if (pid < 0) 
    {
        perror("fork failed");
        exit(1);
    } 
    else if (pid == 0) 
    {
        // Child process: Infinite loop until killed
        printf("Child process started with PID %d\n", getpid());
        while (1) 
        {
            printf("Child process running...\n");
            sleep(1);
        }
    } 
    else 
    {
        // Parent process
        printf("Parent process: child PID is %d\n", pid);
        sleep(5);  // Let the child run for 5 seconds
        printf("Parent process: sending SIGTERM to child\n");
        if (kill(pid, SIGTERM) == 0) 
        {
            printf("Signal sent successfully\n");
        } 
        else 
        {
            perror("kill failed");
        }
        // Wait a bit and then exit
        sleep(2);
        printf("Parent exiting\n");
    }
    return 0;
}
