//fork creation with status
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main() 
{
    char *programs[] = {"/bin/ls", "/bin/date", "/usr/bin/whoami"};
    int n = sizeof(programs) / sizeof(programs[0]);
    for (int i = 0; i < n; i++) 
    {
        pid_t pid = fork();
        if (pid < 0) 
        {
            perror("fork");
            exit(EXIT_FAILURE);
        }
        if (pid == 0) 
        {
            execl(programs[i], programs[i], NULL);
            perror("execl");
            exit(EXIT_FAILURE);
        } 
        else 
        {
            int status;
            waitpid(pid, &status, 0);  // Wait for this child before next fork
        }
    }
    return 0;
}
