#include <stdio.h>
#define MSG "Hello World\n"
int main()
{

    printf(MSG);    //Hello World
    printf("hello\b \n"); //hi
    printf("how\rare\ryou\n");  // "you"
  
    int a=11;
    printf("a=%d\t",a);
    printf("a=%o\t",a);
    printf("a=%x\n",a);     //"a=11    a=13    a=b"
   
    int a=4000000000;
    unsigned int b=4000000000;
    printf("a=%d\tb=%u\n",a,b);     //"a=-294967296    b=4000000000"
    printf("a=%d\tb=%u\n",__INT_MAX__ ,__UINT16_MAX__); //"a=2147483647    b=65535"
   
    char ch;
    printf("Enter a character:");
    scanf("%c\n",&ch);             //"hi"
    printf("ch=%d\n",ch);         //"ch=104"
    printf("ch=%c\n",ch);        //"ch=h"
    printf("%.2s\n","india");   //"in"
   
    float a=128.234;
    printf("a=%f\n",a);        //"a=128.233994"
    printf("a=%.3f\n",a);     //"a=128.234"
    printf("a=%3.lf\n",a);   //"a=128"
    printf("a=%4.2f\n",a);  //"a=128.23"
    
    int a=625,b=2394,c=12345;
    printf("%5d,%5d,%5d\n",a,b,c);   //"  625, 2394,12345"
    printf("%3d,%4d,%5d\n",a,b,c);  //"625,2394,12345"
    
    int a=99;
    char ch='c';
    printf("%c,%d\n",a,ch);     //"c,99"

    float a1,b1,a2,b2,a3,b3;
    a1=2;
    b1=6.8;
    a2=4.2;
    b2=3.57;
    a3=9.82;
    b3=85.673;
    printf("%3.1f,%4.2f\n",a1,b1);
    printf("%5.1f,%6.2f\n",a2,b2);
    printf("%7.1f,%8.2f\n",a3,b3);
   
    printf("%10s\n","india");
    printf("%4s\n","india");
    printf("%.2s\n","india");
    printf("%5.2s\n","india");

    return 0;
}