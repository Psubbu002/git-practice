#include <stdio.h>
#define MAX(FNAME,DTYPE)        \
            DTYPE FNAME(DTYPE X,DTYPE Y)    \
            {                               \
                return X>Y ? X:Y;           \
            }                               
MAX(max_int,int)
MAX(max_float,float)
MAX(max_double,double)
#define DIFF(FNAME,DTYPE,RTYPE)   \
RTYPE FNAME(DTYPE X, DTYPE Y) { return X-Y;}
DIFF(diff_int,int,int)
DIFF(diff_iptr,int*,int)
DIFF(diff_float,float,float);
DIFF(diff_fptr,float*,int);
#define MAX1 5
#define MSG printf("hi\n");
#define PROD(x,y) ((x)*(y))
#define A 50
#define B A+100 
#define NEW_LINE printf("\n");
#define BLANK_LINE(n) { for(int i=0;i<n;i++) printf("\n");}
#define INFINITE while(1)
#define CHECK(a) if(a==0) break
#define ABS(b) ((b<0)? -(x):(x))
//inline int CUbE(x) { return x*x*x; }
#define CUBE(x) ((x)*(x)*(x))
#define SWAP(dtype,x,y) { dtype t; t=x+y, x=t-x, y=t-y;}
#define INC(dtype,x,i) x=x+i
#define INT int
#define Y 10
#define PRINT(message) printf(message);
#define show(value) printf(#value"=%d\n",value);
#define MACRO(a) if(a<=5) printf(#a"=%d\n",a);
#define toupper(c)  \
            ((c)>='a' && (c)<='z' ? (c) +('A'-'a'):(c))
int main(void)
{
    printf("%d\n",MAX1); //5
    MSG;            //hi
    int a=3,b=4;
    printf("product of a and b is %d\n",PROD(a,b)); //product of a and b is 12

    int i,j;
    i=B/20;     //A+100/20 =50+100/20=50+5
    j=500-B;    //500-A+100=500-50+100=450+100
    printf("i=%d\t%d\n",i,j);   //i=55  j=550

    printf("when you have a chance");
    NEW_LINE;   //"\n"
    printf("to embrace an oportunity");
    BLANK_LINE(3);  //3 blank lines
    printf("give it a hug");
    NEW_LINE;

    int z=5;
    INFINITE
    {
        printf("%d\t",z--); //5 4 3 2 1
        CHECK(z);
    }
    NEW_LINE;

    int arr[4]={1,-2,3,-4};
    int *p=arr+3;
    while(p>=arr)
    {
        printf("%d\t",*p);  //-4 3 -2 1
        p--;
    }
    NEW_LINE;

    int k=1;
    while(k<=8)
    {
        int temp=k++;
         printf("%d\t",CUBE(temp));  //1 8 27 64 125 216 343 512
         printf("%d\t",CUBE(k++));  //((k++)*(k++)*(k++)) , 6 
    }
    NEW_LINE;

    int c=1,d=2,x=3,y=4,s=25,t=26;
    SWAP(int,c,d);
    SWAP(int,x,y);
    SWAP(int,s,t);
    printf("c=%d\td=%d\tx=%d\ty=%d\ts=%d\tt=%d\n",c,d,x,y,s,t); //c=2 d=1 x=4 y=3 s=garbage value t=26

    int arr1[5]={20,34,56,12,96},*ptr=arr1;
    INC(int,arr[2],3);
    INC(int*,ptr,2);
    printf("*ptr=%d\n",*ptr);   //*ptr=56

    INT e=2,*p1=&e;
    printf("e=%d\t*p=%d\n",e,*p1);  //e=2 *p=2

    #if X||Y&&Z
        printf("sea is depth\n");
    #else
        printf("see in depth\n");   //see in depth
    #endif

    int f=3,g=4,h;
    h=f+g;
   // #include <string.h>
    printf("h=%d\n",h);   //h=7

    int p2;
    float q;
    double r;
    p2=max_int(3,9);
    q=max_float(7.4,5.7);
    r=max_double(12.34,13.54);
    printf("p2=%d\tq=%.2f\tr=%.2lf\n",p2,q,r);  //p2=9 q=7.40   r=13.54

    int iarr[5]={1,2,3,4,5},l,m,n;
    float farr[7]={1,2,3,4,5,6,7},o;
    l=diff_int(iarr[4],iarr[1]);    
    o=diff_float(farr[6],farr[2]);
    m=diff_iptr(&iarr[4],&iarr[1]);
    n=diff_fptr(&farr[4],&farr[1]);
    printf("l=%d\to=%.lf\tm=%d\tn=%d\n",l,o,m,n);   //l=3 0=4 m=3 n=3

    PRINT("HELLO\n");   //HELLO

    int u=10,v=5,w=4;
    show(u/v*w);    //u/v*w=8
   
    int a1=6,b1=15; //printf nothing
    if(a1<=b1)
    {
        MACRO(a1); 
    }
    else{
        MACRO(b1);
    }

    #line 100 "control.c"
    printf("%d \t %s\n",__LINE__,__FILE__); //100   control.c

    char str[]="Devanshi",*p3;
    p3=str;
    while(*p3!='\0')
    {
        printf("%c",*p3++); //Devanshi
    }
    printf("\n");
    p3=str;
    while(*p3!='\0')
    {
        printf("%c",toupper(*p3++));    //eNI
    }
    NEW_LINE;
    p3=str;
    while(*p3!='\0')
    {
        char ch=*p3++;
        printf("%c",ch);    //DEVANSHI
    }
    return 0;
}