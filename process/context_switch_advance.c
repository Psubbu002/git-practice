//Advanced Simulation: Cooperative Scheduler in C
#include <stdio.h>
#include <setjmp.h>

#define MAX_TASKS 2

jmp_buf contexts[MAX_TASKS];
int current = 0;

void scheduler() {
    current = (current + 1) % MAX_TASKS;
    longjmp(contexts[current], 1);
}

void task1() {
    for (int i = 0; i < 5; i++) {
        printf("Task 1 executing: %d\n", i);
        scheduler();  // Yield to other task
    }
}

void task2() {
    for (int i = 0; i < 5; i++) {
        printf("Task 2 executing: %d\n", i);
        scheduler();  // Yield to other task
    }
}

int main() {
    if (setjmp(contexts[0]) == 0) {
        if (setjmp(contexts[1]) == 0) {
            task1();
        } else {
            task2();
        }
    } else {
        if (current == 0) task1();
        else task2();
    }

    return 0;
}
