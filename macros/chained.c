#include <stdio.h>
#define PI 3.142
#define CIRCUMFERENCE(x) (2*PI*x)
int main(){
   int x = 5;
   printf("Circumference of a circle with radius %d is %f", x, CIRCUMFERENCE(x));	
   return 0;
}