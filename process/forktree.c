//fork ceation
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
void run_program(const char *program) 
{
    execl(program, program, NULL);
    perror("execl failed");
    exit(EXIT_FAILURE);
}
int main() 
{
    pid_t pid1, pid2;
    pid1 = fork();
    if (pid1 == 0) 
    {
        // First child forks its own child
        pid_t pid1_1 = fork();
        if (pid1_1 == 0) 
        {
            run_program("/bin/ls");
        }
        wait(NULL);  // Wait for child
        run_program("/bin/date");
    }

    pid2 = fork();
    if (pid2 == 0) 
    {
        // Second child forks its own child
        pid_t pid2_1 = fork();
        if (pid2_1 == 0) 
        {
            run_program("/usr/bin/whoami");
        }
        wait(NULL);
        run_program("/bin/echo");
    }
    // Parent waits for both children
    waitpid(pid1, NULL, 0);
    waitpid(pid2, NULL, 0);
    return 0;
}
