#include <stdio.h>
#define NEWLINE printf("\n");
void displayBits(unsigned int  x)
{
    int bits = sizeof(x) * 8;
    for (int i = bits - 1; i >= 0; i--)
    {
        printf("%d", (x >> i) & 1);
    }
    printf("\n");
}

void setbitcount(unsigned int x)
{
    int count=0;
    while(x)
    {
        x=x&(x-1);
        count++;
    }
    printf("the set bit count is %d\n",count);
}

unsigned NextHighPow2(unsigned int n)
{
    if (n == 0) 
        return 1;
    if ((n & (n - 1)) == 0) 
        return n; 
    n--;
    for (unsigned int shift = 1; shift < 32; shift *= 2)
    {
        n |= n >> shift;
    }
    return n + 1;
}

int func(unsigned x,unsigned y, int p, int n)
{
    unsigned  mask = (~(~0U << n)) << (p - n + 1); 
    //return (x&~mask)|(y&mask); //left shift
   // return (x&~mask)|((y<<(p-n+1))&mask); //right shift
    return (x&~mask)|(y<<(p-n+1));
}

int main(void)
{
    unsigned int mask=0x1;
    unsigned int num;
    printf("Enter a number:");
    scanf("%u",&num);

    if((num&mask)==0)   
        printf("Even number\n"); 
    else
        printf("odd number\n");
    displayBits(num);
    NEWLINE;

    printf("two's compliment:");
    displayBits(~num+1);
    setbitcount(num);
    if (num != 0 && (num & (num - 1)) == 0)
        printf("%u is power of 2\n",num);
    else
        printf("%u is not power of 2\n",num);
    NEWLINE;

    printf("the next highest power of %u is %u\n",num,NextHighPow2(num));
    NEWLINE;

    printf("before removing the right most 1 bit:\t");
    displayBits(num);
    num=num&(num-1);
    printf("After removing the right most 1 bit:\t");
    displayBits(num);
    NEWLINE;

    int p=7,n=2;
    printf("before swaping p=%d\tn=%d\n",p,n);
    p=p^n;
    n=p^n;
    p=p^n;
    printf("after swaping p=%d\tn=%d\n",p,n);
    NEWLINE;

   //mask = (~(~0U << n)) << (p - n + 1);
     mask=(~(0u<<n)-(p+1))<<p;
    num=103145;
    displayBits(num);
    num=num|mask;       //set 
    printf("after bit setting:");
    displayBits(num);
    
    num=103145;
    num=num&~mask;       //clear
    printf("after bit clearing:");
    displayBits(num);

    num=103145;
    num=num^mask;       //invert(toggle)
    printf("after bit toggle:");
    displayBits(num);
    NEWLINE;

    unsigned int a=0x23173b4,b=0x557;
    printf("number a:");
    displayBits(a);
    printf("number b:");
    displayBits(b);
  
   
    printf("left most:");
    a=func(a,b,p,n);
    displayBits(a);

    printf("right most");
    a=func(a,b,p,n);
    displayBits(a);
   
    a=func(a,b,p,n);
    displayBits(a);
    NEWLINE;
    return 0;
}
