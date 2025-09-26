#include <stdio.h>
struct rectangle{
   float len, brd;
   double area;
};
int area(struct rectangle);
int main(){
   struct rectangle r;
   r.len = 10.50; 
   r.brd = 20.5;
   area(r);
   return 0;
}
int area(struct rectangle r)
{
   r.area = (double)(r.len * r.brd);
   printf("Length: %f \nBreadth: %f \nArea: %lf\n", r.len, r.brd, r.area);
   return 0;
}