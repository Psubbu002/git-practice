#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
bool isPrime(int num) {
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0)
            return false;
    }
    return true;
}
int factorial(int num1)
{
    if(num1==0)
    {
        return true;
    }
    else{
        return num1*factorial(num1-1);
    }
}
int main() {
    int number;
    char str[1000];
    int vowels=0;
    int consonants=0;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isPrime(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);
        
    int fact=factorial(number);
    printf("the factorial of %d is %d\n",number,fact);
    printf("Enter a string: ");
    scanf(" %[^\n]", str); 
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') { 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}