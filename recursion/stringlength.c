#include <stdio.h>
int StringLength(char *str) {
    if (*str == '\0') {
        return 0;
    }
    return 1 + StringLength(str + 1);
}
int main() {
    char str[100];
    printf("Enter a string: ");    
    if (fgets(str, sizeof(str), stdin)) {
        int i = 0;
        while (str[i] != '\0') {
            if (str[i] == '\n') {
                str[i] = '\0';
                break;
            }
            i++;
        }
        int length = StringLength(str);
        printf("Length of the string is %d.\n", length);
    } else {
        printf("Error reading input.\n");
    }
    return 0;
}