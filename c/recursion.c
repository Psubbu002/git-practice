#include <stdio.h>
#include <stdint.h>
#if(0)
void display1(int num)
{
    if(num==0)
    {
        return;
    }
    printf("%d ",num);  //winding phase  : 5 4 3 2 1
    display1(num-1);
}
void display2(int num)
{
    if(num==0)
    {
        return ;
    }
    display2(num-1);
    printf("%d \n",num);    //unwinding phase  : 1 2 3 4 5
}
int main(void)
{
    int n;
    printf("enter a number:");
    scanf("%d",&n); //5
    printf("display 1:\n");
    display1(n);
    printf("display2:\n");
    display2(n);
    return 0;
}

//base convertion
void convert(int num,int base)
{
    uint8_t rem=num%base;
    if(num==0)
    {
        return;
    }
    convert(num/base,base);
    if(rem<10)
    {
        printf("%d ",rem);
    }
    else{
        printf("%c ",rem-10+'A');
    }
}
int main(void)
{
    int n;
    printf("enter a positive number:"); //16
    scanf("%d",&n);
    if(n<0)
    {
        printf("enter a valid number");
    }
    printf("binary convertion:\n");
    convert(n,2);       //1 0 0 0 0
    printf("\n");
    printf("octal convertion:\n");
    convert(n,8);       // 2 0
    printf("\n");
    printf("hexadecimal convertion:\n");
    convert(n,16);
    printf("\n");   // 1 0
    return 0;
}
    #endif
void fun1(int n);
void fun2(int n);
int main(void)
{
    fun1(4);
    fun2(4);    
    return 0;
}
void fun1(int n)
{
    int i;
    if(n==0)
    {
        return ;
    }
    for(i=1;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");
    fun1(n-1);
}
void fun2(int n)
{
    int i;
    if(n==0)
    {
        return ;
    }
        fun2(n-1);
    for(i=1;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");
}