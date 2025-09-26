#include <stdio.h>
int main() {
    unsigned int a = 5;   // 0000 0101
    unsigned int b = 9;   // 0000 1001
    printf("a = %u (0x%X)\n", a, a);
    printf("b = %u (0x%X)\n\n", b, b);
    unsigned int and_result = a & b;
    printf("a & b = %u (0x%X)\n", and_result, and_result);  // 0000 0001 => 1
    unsigned int or_result = a | b;
    printf("a | b = %u (0x%X)\n", or_result, or_result);    // 0000 1101 => 13
    unsigned int xor_result = a ^ b;
    printf("a ^ b = %u (0x%X)\n", xor_result, xor_result);  // 0000 1100 => 12
    unsigned int not_a = ~a;
    printf("~a = %u (0x%X)\n", not_a, not_a);               
    unsigned int left_shift = a << 1;
    printf("a << 1 = %u (0x%X)\n", left_shift, left_shift); // 0000 1010 => 10
    unsigned int right_shift = a >> 1;
    printf("a >> 1 = %u (0x%X)\n", right_shift, right_shift); // 0000 0010 => 2
    return 0;
}
