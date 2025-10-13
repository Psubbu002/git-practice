#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>
void sig_handler(int sig) {
    switch (sig) {
        case SIGINT:
            printf("Received SIGINT\n");
            break;
        case SIGTERM:
            printf("Received SIGTERM\n");
            break;
        case SIGALRM:
            printf("Received SIGALRM\n");
            break;
        case SIGSEGV:
            printf("Received SIGSEGV\n");
            break;
        default:
            printf("Received signal: %d\n", sig);
    }
}
int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Child process
        signal(SIGINT, sig_handler);
        signal(SIGTERM, sig_handler);
        signal(SIGALRM, sig_handler);

        printf("Child PID: %d, waiting for signals...\n", getpid());
        while (1) {
            pause(); // Wait for signals
        }
        exit(0);
    } else {
        // Parent process
        //int status;
        //wait(&status);
        sleep(2);
        kill(pid, SIGINT);
        sleep(1);
        kill(pid, SIGALRM);
        sleep(1);
        kill(pid, SIGTERM);
        sleep(1);
        kill(pid, SIGKILL); // This will forcefully end the child
    }

    return 0;
