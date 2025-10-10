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
        // Child process
        printf("Child process started. PID: %d, Parent PID: %d\n", getpid(), getppid());
        sleep(10);  // Sleep to allow parent to exit
        // After parent exits, child becomes orphan and is adopted by init (PID 1)
        printf("Child process after parent exit. PID: %d, New Parent PID: %d\n", getpid(), getppid());
        exit(0);
    } 
    else 
    {
        // Parent process
        printf("Parent process (PID: %d) exiting immediately.\n", getpid());
        exit(0);  // Parent exits immediately
    }
    return 0;
}
