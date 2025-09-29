#include <stdio.h>
struct rectangle 
{
   float len, brd;
   double area;
};
struct rectangle area(float x, float y);
struct rectangle area(float x, float y)
{
   double area = (double)(x*y);
   struct rectangle r = {x, y, area};
   return r;
}
int main()
{
   struct rectangle r;
   float x, y;
   x = 10.5; y = 20.5;
   r = area(x, y);
   printf("Length: %f \n Breadth: %f \n Area: %lf\n", r.len, r.brd, r.area);
   return 0;
}
