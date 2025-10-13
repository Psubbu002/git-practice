#include <stdio.h>
#include <setjmp.h>

jmp_buf buffer;

void secondFunction() {
    printf("In secondFunction, jumping back to main...\n");
    longjmp(buffer, 1);  // Jump back to where setjmp was called
}

void firstFunction() {
    printf("In firstFunction, calling secondFunction...\n");
    secondFunction();
}

int main() {
    if (setjmp(buffer) == 0) {
        printf("setjmp called, now calling firstFunction...\n");
        firstFunction();
    } else {
        printf("Returned to main using longjmp!\n");
    }
    return 0;
}
