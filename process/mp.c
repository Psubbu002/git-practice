#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main() 
{
    for (int i = 0; i < 3; i++) 
    {
        pid_t pid = fork();
        if (pid == 0) 
        {
            printf("Child %d: PID = %d\n", i + 1, getpid());
            return 0;
        }
    }
    // Only parent reaches here
    sleep(1); // Give time for children to run
    printf("Parent done.\n");
    return 0;
}
