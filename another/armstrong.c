 #include <stdio.h>
int main() 
{
    int n, q, rem, result = 0, count = 0;
    printf("Enter Number: ");
    scanf("%d", &n);
    q = n;
    //count number of digits
    while(q != 0) {
        count++;
        q = q / 10;
    }
    q = n;
    //count sum of power of digits
    while(q != 0) {
        rem = q % 10;
        int mul = 1;  
        for(int i = 1; i <= count; i++) 
        {
            mul *= rem;
        }
        result += mul;  
        q = q / 10;
    }
    if(result == n) {
        printf("%d is an Armstrong Number.\n", n);
    } else {
        printf("%d is not an Armstrong Number.\n", n);
    }
    return 0;
}
