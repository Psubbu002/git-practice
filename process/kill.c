#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
void sigint_handler(int sig) 
{
    printf("Child: Received SIGINT (Ctrl+C). Cleaning up...\n");
}
void sigterm_handler(int sig) 
{
    printf("Child: Received SIGTERM. Terminating gracefully...\n");
    exit(0);
}
void sigstop_handler(int sig) 
{
    // SIGSTOP cannot be caught, so this handler won't actually be called.
    printf("Child: Received SIGSTOP (this won't print!)\n");
}
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
        // Child process: Set signal handlers
        signal(SIGINT, sigint_handler);    // Handle Ctrl+C
        signal(SIGTERM, sigterm_handler);  // Handle termination request
        // SIGSTOP cannot be caught or ignored, so no handler here.
        printf("Child process started with PID %d\n", getpid());
        while (1) 
        {
            printf("Child running... PID=%d\n", getpid());
            sleep(1);
        }
    } 
    else 
    {
        // Parent process: send signals to child
        printf("Parent: child PID is %d\n", pid);
        sleep(3);
        printf("Parent: sending SIGINT to child\n");
        kill(pid, SIGINT);
        sleep(3);
        printf("Parent: sending SIGTERM to child\n");
        kill(pid, SIGTERM);
        sleep(3);
        // After SIGTERM child should be terminated, but let's try SIGSTOP and SIGKILL
        // If child is alive, SIGSTOP suspends it, SIGKILL kills immediately.
        printf("Parent: sending SIGSTOP to child\n");
        kill(pid, SIGSTOP);
        printf("Parent: child should be stopped now (if alive)\n");
        sleep(3);
        printf("Parent: sending SIGKILL to child\n");
        kill(pid, SIGKILL);
        printf("Parent: sent SIGKILL to child\n");
        sleep(2);
        printf("Parent exiting\n");
    }
    return 0;
}
