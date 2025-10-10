#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main() 
{
    pid_t zombie_pid, orphan_pid;
    // Create first child (zombie)
    zombie_pid = fork();
    if (zombie_pid < 0) 
    {
        perror("fork failed");
        exit(1);
    }
    if (zombie_pid == 0) 
    {
        // Child process 1 - will exit immediately (zombie)
        printf("Zombie child (PID %d) exiting immediately.\n", getpid());
        exit(0);
    }
    // Parent does NOT wait for zombie child here!
    // Create second child (orphan)
    orphan_pid = fork();
    if (orphan_pid < 0) 
    {
        perror("fork failed");
        exit(1);
    }
    if (orphan_pid == 0) 
    {
        // Child process 2 - sleep so parent exits early
        printf("Orphan child started. PID: %d, Parent PID: %d\n", getpid(), getppid());
        sleep(10);
        printf("Orphan child (PID %d) after parent exit, new parent PID: %d\n", getpid(), getppid());
        exit(0);
    }
    // Parent process
    printf("Parent PID: %d created zombie child PID: %d and orphan child PID: %d\n",
           getpid(), zombie_pid, orphan_pid);
    // Wait for the orphan child to avoid it becoming zombie
    waitpid(orphan_pid, NULL, 0);
    printf("Parent exiting without waiting for zombie child.\n");
    // Sleep to allow you to see the zombie child with `ps`
    sleep(15);
    return 0;
}
