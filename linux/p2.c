#include <unistd.h>
#include <stdio.h>  // For printf

int main() {
    pid_t pid = getpid();
    printf("My process ID is %d\n", pid);
    printf("Parent process ID is %d\n",getppid());
    return 0;
}
