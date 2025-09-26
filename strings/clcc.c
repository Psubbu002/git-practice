#include <stdio.h>
#define MAX 100
void copy(char *src, char *dest) {
    while (*dest++= *src++ );
}
int findLen(char* src) {
  	if (!*src) return 0;
  	return 1 + findLen(src + 1);
}
void concat(char *src, char *src2) {
    while (*src)
        src++;  
    while (*src2) {
        *src = *src2;
        src++;          
        src2++;         
    }
    *src = '\0';
}
int main() {
    char src[20];
    char dest[50];
    char src2[20];
    char str1[MAX] = { 0 };
    char str2[MAX] = { 0 };
    int flag = 1;
    char *ptr1 = str1;
    char *ptr2 = str2;
    printf("Enter a character:");
    scanf("%s",&src);
    copy(src, dest);
    printf("the copied character is :%s\n", dest);
    printf("the length of the %s is %d \n",src,findLen(src));
    printf("Enter another character:");
    scanf("%s",&src2);
    concat(src,src2);
    printf("after concatination the string is :%s\n",src);
    printf("Enter string 1: ");
    scanf("%s", ptr1);
    printf("Enter string 2: ");
    getchar(); 
    scanf("%s", ptr2);
    printf("string1: %s\nstring2: %s\n", ptr1, ptr2);
    for (int i= 0; (*(ptr1 + i)) != '\0'; i++) {
        if (*(ptr1 + i) != *(ptr2 + i)) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Strings are same.\n");
    else
        printf("Strings are not same.\n");
    return 0;
}