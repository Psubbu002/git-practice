#include <stdio.h>
int main() 
{
    int num = 12;
    char *ptr = (char*)&num;
    if (*ptr == 12)
        printf("Little Endian\n");
    else
        printf("Big Endian\n");

    printf("Original number: 0x%x\n", num);
    //to check the little endian
    printf("Bytes in memory:\n");
    int j=0;
    for (int i =sizeof(num)-1; i>=0; i--) 
    {
        printf("Byte %d: 0x%x\n", j, ptr[i]);
        j++;
    }
    if (ptr[0] == 0x12) 
    {
        printf("System is Little Endian\n");
    } 
    else
    {
        printf("System is Big Endian\n");
    } 

    //to check the big endian
    printf("Bytes in memory:\n");
    for(int i=0;i<sizeof(num);i++)
    {
        printf("Byte %d: 0x%x\n",i,ptr[i]);
    }
    if (ptr[0] == 0x78) 
    {
        printf("System is Little Endian\n");
    } 
    else
    {
        printf("System is Big Endian\n");
    } 
    return 0;
}
