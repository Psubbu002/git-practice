//check system is little/big endian , and convert little to big endian system
#include <stdio.h>
void checkEndian() 
{
    unsigned int x = 1;
    char *c = (char*)&x;
    if(*c)
        printf("System is Little Endian\n");
    else
        printf("System is Big Endian\n");
}

// Function to swap bytes (4-byte integer) to convert endian
unsigned int swapEndian(unsigned int num) 
{
    return ((num>>24)&0xff) |       // move byte 3 to byte 0
           ((num<<8)&0xff0000) |    // move byte 1 to byte 2
           ((num>>8)&0xff00) |      // move byte 2 to byte 1
           ((num<<24)&0xff000000);  // move byte 0 to byte 3
}
unsigned int Endian(unsigned int num)
{
    unsigned char byte0 = (num >> 24) & 0xFF; // Most significant byte
    unsigned char byte1 = (num >> 16) & 0xFF;
    unsigned char byte2 = (num >> 8) & 0xFF;
    unsigned char byte3 = num & 0xFF;         // Least significant byte
    printf("Bytes: 0x%x, 0x%x, 0x%x, 0x%x\n", byte0, byte1, byte2, byte3);
    return 0;
}
int main(void) 
{
    checkEndian();
    unsigned int n;
    printf("Enter a 4-byte number to convert endian: ");
    scanf("%u", &n);
    unsigned int converted = swapEndian(n);
    printf("Original: 0x%x\n", n);
    printf("Converted: 0x%x\n", converted);
    printf("\n");
    unsigned int num = 0x12345678;
    Endian(num);
    return 0;
}