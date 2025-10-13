//daemon process 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>
void daemonize() 
{
    pid_t pid = fork();
    if (pid < 0) 
    {
        // Fork failed
        perror("fork");
        exit(EXIT_FAILURE);
    }
    if (pid > 0) 
    {
        // Exit the parent process
        exit(EXIT_SUCCESS);
    }
    // Child continues
    // Create a new session and become session leader
    if (setsid() < 0) 
    {
        perror("setsid");
        exit(EXIT_FAILURE);
    }
    // Catch, ignore and handle signals (optional)
    signal(SIGCHLD, SIG_IGN);
    signal(SIGHUP, SIG_IGN);
    // Fork again to ensure the daemon is not a session leader
    pid = fork();
    if (pid < 0) 
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    if (pid > 0) 
    {
        // Exit the first child
        exit(EXIT_SUCCESS);
    }
    // Set file permissions mask to 0
    umask(0);
    // Change working directory to root to avoid locking a directory
    if (chdir("/") < 0) 
    {
        perror("chdir");
        exit(EXIT_FAILURE);
    }
    // Close all open file descriptors
    for (int x = sysconf(_SC_OPEN_MAX); x>=0; x--) 
    {
        close(x);
    }
    // Redirect standard files to /dev/null
    open("/dev/null", O_RDWR); // stdin
    dup(0); // stdout
    dup(0); // stderr
}
int main() 
{
    daemonize();
    // Daemon-specific initialization goes here
    // For demo: write to a file every 10 seconds
    FILE *fp = fopen("/tmp/daemon.log", "a+");
    if (!fp) 
    {
        exit(EXIT_FAILURE);
    }
    while (1) 
    {
        fprintf(fp, "Daemon is alive! PID: %d\n", getpid());
        fflush(fp);
        sleep(1);
    }
    fclose(fp);
    return 0;
}