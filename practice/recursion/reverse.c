//print "Hello" n times, print n natural numbers(both sides), print reverse n natural numbers,find the sum of n natural numbers
#include <stdio.h>
void printHello(int n) 
{
    if (n <= 0) return;
    printf("Hello\n");
    printHello(n - 1);
}
void printNatural(int n) 
{
    if (n == 0) return;
    printNatural(n - 1);
    printf("%d ", n);
}
void printReverse(int n) 
{
    if (n == 0) return;
    printf("%d ", n);
    printReverse(n - 1);
}
int sumNatural(int n) 
{
    if (n == 0) return 0;
    return n + sumNatural(n - 1);
}
int countDigits(int num) 
{
    if (num == 0) return 0;
    return 1 + countDigits(num / 10);
}
int main(void) 
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("\nPrinting 'Hello' %d times:\n", n);
    printHello(n);

    printf("\nFirst %d natural numbers:\n", n);
    printNatural(n);
    printf("\n");

    printf("\nFirst %d natural numbers in reverse:\n", n);
    printReverse(n);
    printf("\n");

    int sum = sumNatural(n);
    printf("\nSum of first %d natural numbers: %d\n", n, sum);

    int num;
    printf("\nEnter an integer to count its digits: ");
    scanf("%d", &num);
    if (num == 0) printf("Number of digits in %d = 1\n", num);
    else printf("Number of digits in %d = %d\n", num, countDigits(num));
    return 0;
}