#include <stdio.h>
int main() {
    unsigned int num = 0x12345678;  
    unsigned char *ptr = (unsigned char*)&num;
    printf("Original number: 0x%x\n", num);
    printf("Bytes in memory:\n");
    for (int i = 0; i < sizeof(num); i++) {
        printf("Byte %d: 0x%x\n", i, ptr[i]);
    }
    if (ptr[0] == 0x78) {
        printf("System is Little Endian\n");
    } else if (ptr[0] == 0x12) {
        printf("System is Big Endian\n");
    } else {
        printf("Unknown Endianness\n");
    }
    return 0;
}
