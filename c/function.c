#include <stdio.h>
int main(void)
{
    printf("hello\n");  //hello
    goto ab;    //works only within a function
    return 0;
}
void function(void) //function didn't called 
{
    ab:
    printf("bye\n");
}

int func(void);
int main(void)
{
    int x=10;
    x=func();
    printf("%d\n",x);   //0
    return 0;
}
int func(void)
{
    printf("function\n");   //function
}

void func(int a,int b);
int main(void)
{
    int x;
    x=func(2,3);
    return 0;
}
void func(int a,int b)
{
    int s;
    s=a+b;
    return;
}

int add(int x,y,z)
{
    return x+y+z;
}
int main(void)
{
    int sum;
    sum=add(1,2,3);
    return 0;
}

int main(void)
{
    int s;
    s=fun(2,3); //calling with insufficient 
    printf("%d\n",s);
    s=fun(1,2,3);
    printf("%d\n",s);
    return 0;
}
int fun(int a, int b, int c)    // no function definition before the main
{
    return a+b+c;
}

int mul(int x, int y);
int sum(int x, int y);
int main(void)
{
    int m=6,n=3;
    printf("%d\n",mul(m,n));        //18
    printf("%d\n",mul(15,4));       //60
    printf("%d\n",mul(m+n,m-n));    //27
    printf("%d\n",mul(6,sum(m,n)));     //54
    return 0;
}
int mul(int x, int y)
{
    return x*y;
}
int sum(int x,int y)
{
    return x+y;
}

int fun(int x ,int y);
int main(void)
{
    int p=fun(5,6);
    printf("%d\n",p);
    return 0;
}
int fun(int x ,int y)
{
    int x=2;    //redeclaration
    return x*y;
}

int max(int x,int y)
{
    return x>y?x:y;
}
int main(void)
{
    int a=2,b=8,c=3;
    printf("%d\n",max(a,max(b,c))); //8
    return 0;
}

int diff(int x,int y)
{
    return x-y;
}
int sum(int x,int y)
{
    return x+y;
}
int main(void)
{
    int a=20,b=5,c=2,d=6;
    printf("%d\n",a+diff(d,c));             //24
    printf("%d\n",diff(a,sum(diff(b,c),d)));    //11
    return 0;
}

int fun(int x,int y,int z);
int main(void)
{
    int a=1,b=2,c=3,result;
    result=fun(a,b,(c=5,c+10));
    printf("a=%d, b=%d, c=%d\n",a,b,c);
    printf("result=%d\n",result);
    return 0;
}
int fun(int x,int y,int z)
{
    return 2*(x+y+z);
}

int min(int x,int y);
int main(void)
{
    int a=10,b=5;
    printf("%d\n",min(a,b));
    return 0;
}
int min(int x,int y)
{
    x<y?return x:return y;  //cannot use return in ternary 
}

void fun(int x,int y);
int main(void)
{
    int x;
    x=fun(5,6)+100;     //fun is void not return anything
    printf("%d\n",x);
    return 0;
}
void  fun(int x,int y)
{
    int z;
    z=x+y;
}

int  sqr(int x);
int cube(int x);
int fun(int n);
int main(void)
{
    int n=5;
    printf("%d\n",fun(n));  //78
    return 0;
}
int sqr(int x)
{
    return x*x;
}
int cube(int x)
{
    return x*x*x;
}
int fun(int n)
{
    return n+sqr(n-2)+cube(n-1);
}

int sum(int x,int y);
int main(void)
{
    (void)sum(1,2); //(void) cast tells the compiler we are intentionally ignoring the return value
    return 0;
}
int sum(int x,int y)
{
    printf("sum=%d\n",x+y); //sum=3
    return x+y;
}

int sqr1(int a);
int sqr2(double a);
double sqr3(int a);
double sqr4(double a);
int main(void)
{
    double x=2.5,y;
    y=sqr1(x);  //// passing double to int function
    printf("%lf\n",y);      //2*2=4
    y=sqr2(x);   // passing double to double function, returning int
    printf("%lf\n",y);  //2.5*2.5=6
    y=sqr3(x);  // passing double to int function, returning double
    printf("%lf\n",y);  //2*2=4
    y=sqr4(x);  // passing double to double function, returning double
    printf("%lf\n",y);  //2.5*2.5=6.25
    return 0;
}
int sqr1(int a)
{
    return a*a;
}
int sqr2(double a)
{
    return a*a;
}
double sqr3(int a)
{
    return a*a;
}
double sqr4(double a)
{
    return a*a;
}

void fun(void);
int main(void)
{
    int i=5;
    for(i=i+1;i<8;i++)
    {
        fun();
    }
    return 0;
}
void fun(void)
{
    int j;
    for(j=1;j<3;j++)
    {
        printf("%d\t",++j); //2 2
    }
}

int main(void)
{
    int fun(int a,int b)
    {
        return (a+b);
    }
    int c;
    c=fun(3,5);
    printf("%d\n",c);
    return 0;
}

int fun(int x,int y,int z);
int main(void)
{
    int x;
    x=fun(2,3,4);
    printf("%d\n",x);
    return 0;
}
int fun(int x,int y,int z)
{
    return x,y,z;
}

void display(int,int);
int main(void)
{
    int x=15;
    float y=290.5;
    display(x,y);
    return 0;
}
void display(int a,int b)
{
    printf("%d  %d\n",a,b);     // 15   290
}

int fun(int a,int b);
int main(void)
{
    int i=2,j=3;
    printf("%d %d\n",fun(i,j)); //7 6422356
    return 0;
}
int fun(int a,int b)
{
    a=a-5;
    b=b+5;
    return (!a + --b);
}

void fun(int a, int b);
int main(void)
{
    int i=5,j=10;
    fun(i/2,j%3);
    return 0;
}
void fun(int a, int b)
{
    a/=2;
    b--;
    printf("%d\n",a+b); //1
}

int a=5;
void fun(void);
int main(void)
{
    fun();
    printf("%d\n",a);   // 5
    return 0;
}
void fun(void)
{
    int a=2;
    printf("%d\n",a);   //2
}

int fun(int k);
int main(void)
{
    int i=0,k=3;
    i+=fun(k);
     i+=fun(k);
      i+=fun(k);
      printf("%d\n",i); // 11
      return 0;
}
int fun(int k)
{
    static int m=2;
    m=m+k;
    return m;
}

void fun(int a , static int b); //not allow static in function parameters.
int main(void)
{
    fun(1,2);
    fun(3,4);
    return 0;
}
void fun(int a,static int b)
{
    a++;
    b++;
    printf("%d %d\n",a,b);
}

int fun(int n);
int main(void)
{
    printf("%d\n",fun(2));  //3
    printf("%d\n",fun(5));  //18
    printf("%d\n",fun(2));  //21
    return 0;
}
int fun(int n)
{
    static int s=0;
    int i;
    for(i=1;i<=n;i++)
    {
        s+=i;
    }
    return s;
}

int fun(int x,int y);
int main(void)
{
    int a=2,b=5;
    a=fun(a+b,a-b);
    printf("%d\n",a);   //10 
    return 0;
}
int fun(int x,int y)
{
    return x+y,x-y;
}

int main(void)
{
    int i=9;
    if(i==9)
    {
        int i=25;
    }
    printf("%d\n",i);   //9
    return 0;
}

int f2(int x,int y);
int main(void)
{
    int a,b;
    printf("enter a and b values\n");
    scanf("%d %d",&a,&b);
    printf("%d\n",func(a,b));
    return 0;
}
int func(int a,int b)
{
    int x;
    if(a==b)
    {
        x=f1(a,b);  //f1 not decfined
    }
    else
    {
        x=f2(a,b);
    }
    return x;
}
int f1(int x,int y)
{
    return x+y;
}
int f2(int x,int y)
{
    return x-y;
}

int fun(void);
int main(void)
{
    int i;
    for(i=0;i<=6;i++)
    {
        printf("%d ",fun());
    }
    return 0;
}
int fun(void)
{
    static int k=1;
    k*=2;
    return k;
}

