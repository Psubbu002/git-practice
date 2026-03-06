#include <stdio.h>
int swap(int *x, int *y)
{
   int z;
   z = *x;   
   *x = *y;  
   *y = z;   
   return 0;
}
int swap1(int x, int y)
{
   int z;
   z=x;
   x=y;
   y=z;
   return 0;
}
int main()
{
   int a = 10;
   int b = 20;
   printf("Before swap, value of a: %d\t b:%d\n", a ,b);		
   swap1(a, b);
   printf("calling by value, value of a: %d\tb:%d\n", a);
   swap(&a, &b);
   printf("calling by reference, value of a: %d\tb:%d\n", a,b);				
   return 0;
}
