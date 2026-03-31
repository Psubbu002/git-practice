#include <stdio.h>
#include <stdint.h>
//Goto example
void function(void) 
{
ab:
    printf("bye\n");
}

int func(void) 
{
    printf("function\n");
    return 0;  // fixed to compile
}

void func2(int a, int b) 
{
    int s;
    s = a + b;
}

int add(int x, int y, int z) { return x + y + z; }

int fun3(int a, int b, int c) { return a + b + c; }

int mul(int x, int y) { return x * y; }

int sum(int x, int y) { return x + y; }

int fun2(int x, int y) { return x * y; }

int max(int x , int y) { return x > y ? x : y; }

int diff(int x, int y) { return x - y; }

int fun4(int x, int y, int z) { return 2 * (x + y + z); }

int min(int x, int y) { return x < y ? x : y; }

void fun_void(int x, int y) 
{
    int z;
    z = x + y;
}

int sqr(int x) { return x * x; }

int cube(int x) { return x * x * x; }

int fun5(int n) { return n + sqr(n - 2) + cube(n - 1); }

int sum2(int x, int y) 
{
    printf("sum=%d\n", x + y);
    return x + y;
}

int sqr1(int a) { return a * a; }

int sqr2(double a) { return (int)(a * a); }

double sqr3(int a) { return a * a; }

double sqr4(double a) { return a * a; }

void fun6(void) 
{
    int j;
    for (j = 1; j < 3; j++) 
        printf("%d\t", ++j);
}

int fun7(int a, int b) { return a + b; }

int fun8(int x, int y, int z) { return z; }

void display(int a, int b) { printf("%d  %d\n", a, b); }

int fun9(int a, int b) 
{ 
    a = a - 5; 
    b = b + 5; 
    return (!a + --b); 
}

void fun10(int a, int b) { a /= 2; b--; printf("%d\n", a + b); }

int global_a = 5;
void fun11(void) 
{
    int a = 2;
    printf("%d\n", a);
}

int fun12(int k) 
{
    static int m = 2;
    m = m + k;
    return m;
}

//void fun13(int a , static int b) { a++; b++; printf("%d %d\n",a,b); }

int fun14(int n) 
{
    static int s = 0;
    for (int i = 1; i <= n; i++) s += i;
    return s;
}

int fun15(int x, int y) { return x - y; }

int f1(int x, int y) { return x + y; }

int f2(int x, int y) { return x - y; }

int func3(int a, int b) {
    int x;
    if (a == b) x = f1(a, b);
    else x = f2(a, b);
    return x;
}

int fun16(void) 
{
    static int k = 1;
    k *= 2;
    return k;
}

int main(void) 
{
    int choice;
    do {
        printf("\n===== Menu =====\n");
        printf("1. goto example\n");
        printf("2. returning nothing\n");
        printf("3. void func(int,int)\n");
        printf("4. add() function\n");
        printf("5. fun3() function\n");
        printf("6. mul and sum\n");
        printf("7. fun2() with redeclaration\n");
        printf("8. max\n");
        printf("9. diff\n");
        printf("10. fun4() with comma operator\n");
        printf("11. min\n");
        printf("12. fun_void()\n");
        printf("13. sqr/cube/fun5()\n");
        printf("14. sum2() with void cast\n");
        printf("15. sqr1..sqr4\n");
        printf("16. fun6() nested loop\n");
        printf("17. fun7()\n");
        printf("18. fun8() comma operator\n");
        printf("19. display()\n");
        printf("20. fun9() complex return\n");
        printf("21. fun10() division/modulo\n");
        printf("22. fun11() global/local\n");
        printf("23. fun12() static variable\n");
        printf("24. fun14() static sum\n");
        printf("25. fun15() x-y\n");
        printf("26. func3() f1/f2\n");
        printf("27. fun16() static multiply\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        int x, y, z;
        double d;
        switch (choice) {
            case 1:
                function();
                break;
            case 2:
                x = func();
                printf("%d\n", x);
                break;
            case 3:
                func2(2, 3);
                break;
            case 4:
                x = add(1, 2, 3);
                printf("%d\n", x);
                break;
            case 5:
                x = fun3(1, 2, 3);
                printf("%d\n", x);
                break;
            case 6:
                printf("%d %d\n", mul(6, 3), sum(6, 3));
                break;
            case 7:
                printf("%d\n", fun2(5, 6));
                break;
            case 8:
                printf("%d\n", max(2, 8));
                break;
            case 9:
                printf("%d\n", diff(10, 4));
                break;
            case 10:
                printf("%d\n", fun4(1, 2, 3));
                break;
            case 11:
                printf("%d\n", min(10, 5));
                break;
            case 12:
                fun_void(2, 3);
                break;
            case 13:
                printf("%d\n", fun5(5));
                break;
            case 14:
                (void)sum2(1, 2);
                break;
            case 15:
                d = sqr1(2);
                printf("%lf\n", d);
                break;
            case 16:
                fun6();
                break;
            case 17:
                printf("%d\n", fun7(3, 5));
                break;
            case 18:
                printf("%d\n", fun8(2, 3, 4));
                break;
            case 19:
                display(15, 290);
                break;
            case 20:
                printf("%d\n", fun9(2, 3));
                break;
            case 21:
                fun10(5, 10);
                break;
            case 22:
                fun11();
                printf("%d\n", global_a);
                break;
            case 23:
                printf("%d\n", fun12(3));
                break;
            case 24:
                printf("%d\n", fun14(5));
                break;
            case 25:
                printf("%d\n", fun15(7, 2));
                break;
            case 26:
                printf("%d\n", func3(3, 3));
                break;
            case 27:
                for (int i = 0; i < 6; i++) printf("%d ", fun16());
                printf("\n");
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 0);
    return 0;
}
