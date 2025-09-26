#include <stdio.h>
int main() {
    int n, q, rem;
    printf("Enter Number: ");
    scanf("%d", &n);
    printf("Armstrong numbers from 1 to %d are: ", n);
    for(int i = 1; i <= n; i++) {
        int count = 0, result = 0;
        q = i;
        while(q != 0) {
            count++;
            q /= 10;
        }
        q = i;
        while(q != 0) {
            rem = q % 10;
            int mul = 1;  
            for(int j = 1; j <= count; j++) {  
                mul *= rem;
            }
            result += mul;
            q /= 10;
        }
        if(result == i) {
            printf("%d ", i);
        }
    }
    return 0;
}