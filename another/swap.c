#include <stdio.h>
void swap(int *i,int *j)
{
    *i=*i+*j;
    *j=*i-*j;
    *i=*i-*j;
    printf("after swaping a:%d\n",*i);	//a=20
    printf("after swaping b:%d\n",*j);	//b=10
}
int main()
{
    int a,b;
    printf("enter the value of a:");		//a=10
    scanf("%d",&a);
    printf("enter the value of b:");		//b=20
    scanf("%d",&b);
    // using arithmetc 
    a=a+b;  //a=10+20=30
    b=a-b;  //b=30-20=10
    a=a-b;  //a=30-10=20
    printf("after swaping a :%d\n",a);		//a=20
    printf("after swaping b:%d\n",b);		//b=10
    printf("\n");
    // using XOR 
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after swaping a:%d\n",a);		//a=10
    printf("after swaping b:%d\n",b);		//b=20
    printf("\n");
    swap(&a,&b);    //using pointers
    return 0;
}
