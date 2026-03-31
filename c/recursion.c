#include <stdio.h>
#include <stdint.h>
// ---------------- Recursion: Display numbers ----------------
void display1(int num) 
{
    if (num == 0) return;
    printf("%d ", num);  // winding phase
    display1(num - 1);
}

void display2(int num) 
{
    if (num == 0) return;
    display2(num - 1);
    printf("%d ", num);  // unwinding phase
}

// ---------------- Recursion: Base Conversion ----------------
void convert(int num, int base) 
{
    if (num == 0) return;
    uint8_t rem = num % base;
    convert(num / base, base);
    if (rem < 10)
        printf("%d", rem);
    else
        printf("%c", rem - 10 + 'A');
}

// ---------------- Recursion:Star Patterns ----------------
void fun1(int n) 
{  // decreasing stars
    if (n == 0) return;
    for (int i = 1; i <= n; i++) printf("*");
    printf("\n");
    fun1(n - 1);
}

void fun2(int n) 
{  // increasing stars
    if (n == 0) return;
    fun2(n - 1);
    for (int i = 1; i <= n; i++) printf("*");
    printf("\n");
}

// ---------------- Main Program ----------------
int main(void) 
{
    int choice;
    do {
        printf("\n--- Recursion Menu ---\n");
        printf("1. Display numbers (winding)\n");
        printf("2. Display numbers (unwinding)\n");
        printf("3. Base conversion (binary, octal, hex)\n");
        printf("4. Star patterns\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        int n;
        switch (choice) 
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("Winding phase:\n");
                display1(n);
                printf("\n");
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("Unwinding phase:\n");
                display2(n);
                printf("\n");
                break;
            case 3:
                printf("Enter a positive number: ");
                scanf("%d", &n);
                if (n < 0) 
                {
                    printf("Enter a valid positive number!\n");
                    break;
                }
                printf("Binary: ");
                convert(n, 2);
                printf("\n");
                printf("Octal: ");
                convert(n, 8);
                printf("\n");
                printf("Hexadecimal: ");
                convert(n, 16);
                printf("\n");
                break;
            case 4:
                printf("Enter number of rows: ");
                scanf("%d", &n);
                printf("Decreasing stars:\n");
                fun1(n);
                printf("Increasing stars:\n");
                fun2(n);
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 0);
    return 0;
}
