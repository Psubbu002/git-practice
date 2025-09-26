#include <stdio.h>
void printBinary(unsigned int n) {
    int i;
    int bits = sizeof(n)*2; 
    printf("Binary representation: ");
    for (i = bits - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}
int countSetBits(unsigned int n) {
    int count = 0;
    while (n) {
        n = n & (n - 1); 
        count++;
    }
    return count;
}
int main() {
    unsigned int num;
    printf("Enter a non-negative integer: ");
    scanf("%u", &num);
    printBinary(num);
    int setBits = countSetBits(num);
    printf("Number of set bits: %d\n", setBits);
    return 0;
}
