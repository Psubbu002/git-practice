#include <stdio.h>
#include <setjmp.h>

jmp_buf env1, env2;

void task1() {
    for (int i = 0; i < 5; i++) {
        printf("Task 1: %d\n", i);
        if (i == 2) {
            printf("Task 1 switching to Task 2...\n");
            longjmp(env2, 1);  // Switch to task2
        }
    }
}

void task2() {
    for (int i = 0; i < 5; i++) {
        printf("Task 2: %d\n", i);
        if (i == 2) {
            printf("Task 2 switching to Task 1...\n");
            longjmp(env1, 1);  // Switch back to task1
        }
    }
}

int main() {
    if (setjmp(env1) == 0) {
        if (setjmp(env2) == 0) {
            task1();  // Start task1
        } else {
            task2();  // Resume task2
        }
    } else {
        task1();  // Resume task1
    }

    return 0;
}
