#include <stdio.h>
int main(void)
{
    int a=-3;
    a=-a-a+!a;  //-(-3)-(-3)+0 = 3+3+0 
    printf("%d\n",a);  //6
   
    int a=2,b=1,c,d;
    c=a<b;  //2<1
    d=(a>b) && (c<b);   //(2>1) && (0<1) = 1 && 1
    printf("c=%d, d=%d\n",c,d);  //c=0,d=1
    
    int a=9,b=15,c=16,d=12,e,f;
    e=!(a<b | b<c);     //!(9<15 | 15<16) = !(1|0)=!(1)
    f=(a>b) ? a-b : b-a; //(9>15) ? 9-15 : 15-9 = 15-9
    printf("e=%d,f=%d\n",e,f);  //e=0,f=6

    int a=5;
    a=6;
    a=a+5*a; // (6+5*6)=6+30
    printf("a=%d\n",a);//36

    int a=5,b=5;
    printf("a=%d,b=%d\n",++a,b--);  //6,5
    printf("a=%d,b=%d\n",a,b);  //6,4
    printf("a=%d,b=%d\n",++a,b++);  //7,4
    printf("a=%d,b=%d\n",a,b);  //7,5

    int x,y,z;
    x=8++; //invalid
    y=++x++;    //invalid
    z=(x+y)--;  //invalid
    printf("x=%d,y=%d,z=%d\n",x,y,z);
 
    int a=4,b=8,c=3,d=9,z;
    z=a++ + ++b * c-- - --d; //5 + 9 * 3 - 8 = 5 + 27 -8 = 32-8 =23
    printf("a=%d,b=%d,c=%d,d=%d,z=%d\n",a,b,c,d,z);//5,9,2,8,23
  
    int a=14,b,c;
    a = a % 5;
    b = a / 3;
    c = a / 5 % 3;  // (4/5)%3 =  0%3 = 0
    printf("a=%d,b=%d,c=%d\n",a,b,c);//4,1,0
   
    int a=15,b=13,c=16,x,y;
    x = a - 3 % 2 + c * 2 / 4 % 2 + b / 4;
    y = a = b + 5 - b + 9 / 3;
    printf("x = %d ,y = %d \n", x , y);         //17,8
   
    int x,y,z,k=10;
    k+=(x=5,y=x+2,z=x+y);                       // 10+(5,7,12)=10+12
    printf("x=%d,y=%d,z=%d,k=%d\n",x,y,z,k);    //5,7,12,22
    
    float b;
    b=15/2;
    printf("%f\t",b);           //7.000000
    b=(float)15/2 + (15/2);
    printf("%f\n",b);           //14.500000
    
    int a=9;
    char ch='A';
    a=a+ch+24; //9+65+24
    printf("%d,%c\t%d,%c\n",ch,ch,a,a);//65,A   98,b
  
    int a,b,c,d;
    a=b=c=d=4;
    a*=b+1; //4*4+1 = 4*5
    c+=d*=3;    //4+4*3=4+12=16
    printf("a=%d\tc=%d\n",a,c);//20,16
   
    int a=5,b=10,temp;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d\tb=%d\n",a,b);//10,5
   
    int a=5,b=6;
    printf("%d\n",a=b);//6
    printf("%d\n",a==b);//1
    printf("%d %d\n",a,b);//6 6
  
    int a=3,b=4,c=3,d=4,x,y;
    x=(a=5) && (b=7);
    y=(c=5) || (d=8);
    printf("%d\t%d\t%d\t%d\t%d\t%d\n",a,b,c,d,x,y);//5 7 5 4 1 1 
    x=(a==6) && (b=9);
    y=(c==6) || (d=10);
    printf("%d\t%d\t%d\t%d\t%d\t%d\n",a,b,c,d,x,y);//5 7 5 10 0 1
   
    int a=10;
    a=a++;
    a=a++ * a--; //11 * 10
    printf("%d\n",a);//110
    printf("%d\n",a++ * a++);//12210 
 
    int a=2,b=2,x,y;
    x=4*(++a * 2 +3);   //4 * (3 * 2 +3 ) = 4*(6+3) = 4*9 = 36
    y=4*(b++ * 2+3);    //4 * (2 * 2 + 3) = 4*(4+3) = 4*7 = 28
    printf("%d\t%d\t%d\t%d\n",a,b,x,y);//3 3 36 28
    return 0;
}