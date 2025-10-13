//basic child process creation
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main() 
{
    pid_t pid = fork(); 
    if (pid < 0) 
    {
        perror("fork failed");
    } 
    else if (pid == 0) 
    {
        printf("Child process. PID: %d\n", getpid());
    } 
    else 
    {
        printf("Parent process. PID: %d, Child PID: %d\n", getpid(), pid);
        system("ps -f");
        //system("ps -ef");
        //system("ps -f | grep fork_menu | grep -v grep");
        //system("ps -f --forest");  // Tree view (if supported)
    }
    return 0;
}