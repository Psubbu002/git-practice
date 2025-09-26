#include <stdio.h>
struct Flags {
    unsigned int carry   : 1;
    unsigned int zero    : 1;
    unsigned int sign    : 1;
    unsigned int overflow: 1;
};
int main() {
    struct Flags f = {1, 0, 1, 0};
    printf("Carry: %u\n", f.carry);
    printf("Zero: %u\n", f.zero);
    printf("Sign: %u\n", f.sign);
    printf("Overflow: %u\n", f.overflow);
    return 0;
}
