#include <stdio.h>
#define square(x) ((x) * (x))
int main()
{
   int x = 5;
   printf("x: %d \n",x);		
   printf("Square of x: %d", square(x));	
   return 0;
}
