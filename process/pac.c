//process argument creation
#include <stdio.h>
#include <unistd.h>
int main() 
{
    pid_t pid = fork();
    if (pid == 0) 
    {
        char *args[] = { "echo", "Hello from execvp", NULL };
        execvp("echo", args);
        perror("execvp failed");
    } 
    else 
    {
        wait(NULL);
    }
    return 0;
}
