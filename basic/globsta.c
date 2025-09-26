#include <stdio.h>
int b = 100;
void functionExample() 
{
   static int a = 10;
   printf("Inside function:\n");
   printf("Global Variable: %d\n", b);
   printf("Static Local Variable: %d\n", a);
   b += 10;
   a += 5;
}
int main() {
   printf("Inside main function:\n");
   printf("Initial Global Variable in main: %d\n", b);
   functionExample(); 
   functionExample();
   printf("Final Global Variable in main: %d\n", b);
   return 0;
}
