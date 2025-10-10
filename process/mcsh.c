//multiple children + signal handling
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
int main() 
{
    for (int i = 0; i < 3; i++) 
    {
        pid_t pid = fork();
        if (pid < 0) 
        {
            perror("fork failed");
            exit(1);
        }

        if (pid == 0) 
        {
            // Child process
            if (i == 0) 
            {
                printf("Child %d exiting normally with code 42\n", getpid());
                exit(42);
            } 
            else if (i == 1) 
            {
                printf("Child %d exiting normally with code 0\n", getpid());
                exit(0);
            } 
            else 
            {
                printf("Child %d will be killed by SIGKILL\n", getpid());
                raise(SIGKILL);  // Immediately terminates the process
            }
        }
        // Parent continues to fork next child
    }
    // Parent waits for all children
    for (int i = 0; i < 3; i++) 
    {
        int status;
        pid_t pid = wait(&status);
        if (pid == -1) 
        {
            perror("wait failed");
            continue;
        }
        printf("Parent: Collected child PID %d\n", pid);
        if (WIFEXITED(status)) 
        {
            printf("  Child exited with code: %d\n", WEXITSTATUS(status));
        } 
        else if (WIFSIGNALED(status)) 
        {
            printf("  Child was terminated by signal: %d (%s)\n",
                   WTERMSIG(status),
                   strsignal(WTERMSIG(status)));
        } 
        else 
        {
            printf("  Child ended abnormally.\n");
        }
    }
    return 0;
}
