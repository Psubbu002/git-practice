#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main() 
{
    char *programs[] = {"/bin/ls", "/bin/date", "/usr/bin/whoami", "/bin/echo"};
    int n = sizeof(programs) / sizeof(programs[0]);
    int max_concurrent = 2;
    int running = 0;
    pid_t pids[n];
    for (int i = 0; i < n; i++) 
    {
        while (running >= max_concurrent) 
        {
            int status;
            pid_t done_pid = wait(&status);
            if (done_pid > 0) running--;
        }
        pid_t pid = fork();
        if (pid == 0) 
        {
            execl(programs[i], programs[i], NULL);
            perror("execl");
            exit(EXIT_FAILURE);
        } 
        else if (pid > 0) 
        {
            pids[i] = pid;
            running++;
        } 
        else 
        {
            perror("fork");
            exit(EXIT_FAILURE);
        }
    }

    // Wait for remaining children
    while (running > 0) 
    {
        int status;
        wait(&status);
        running--;
    }

    return 0;
}
