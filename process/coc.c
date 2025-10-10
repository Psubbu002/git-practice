#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main() 
{
    char *programs[] = {"/bin/ls", "/bin/date", "/usr/bin/whoami"};
    int n = sizeof(programs) / sizeof(programs[0]);

    pid_t pid;
    for (int i = 0; i < n; i++) 
    {
        pid = fork();

        if (pid < 0) 
        {
            perror("fork");
            exit(EXIT_FAILURE);
        }

        if (pid == 0) 
        {
            // Child executes its program and exits; does not fork further
            execl(programs[i], programs[i], NULL);
            perror("execl");
            exit(EXIT_FAILURE);
        } 
        else 
        {
            // Parent waits for child to finish before continuing the loop
            int status;
            waitpid(pid, &status, 0);
        }
    }
    return 0;
}
