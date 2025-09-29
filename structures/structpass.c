#include <stdio.h>
struct rectangle
{
   float len, brd;
};
int area(float, float);
int main()
{
   struct rectangle r;
   r.len = 10.50; 
   r.brd = 20.5;
   area(r.len, r.brd);
   return 0;
}
int area(float a, float b)
{
   double area = (double)(a*b);
   printf("Length: %f \nBreadth: %f \nArea: %lf\n", a, b, area);
   return 0;
}