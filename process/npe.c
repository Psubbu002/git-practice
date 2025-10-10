#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main() 
{
    pid_t pid = fork();
    if (pid == 0) 
    {
        // Replace child with "ls -l"
        execl("/bin/ls", "ls", "-l", NULL);
        perror("execl failed"); // Only runs if exec fails
    } 
    else 
    {
        wait(NULL);
        printf("Parent process. PID: %d\n", getpid());
    }
    return 0;
}