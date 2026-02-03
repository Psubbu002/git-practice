#include <stdio.h>
int main(void)
{
   
    int a=5;
    if(a=9)
    {
        printf("a is 9\n");
    }
    else{
        printf("a is 5\n");
    }
    printf("a value is %d\n",a);//a vlaue is 9

    int z=10;
    z==50;
    if(z==50){
        printf("i is 50\n");
    }
    else{
        printf("i is not 50\n");//i is not 50
    }

    int d=9,b=0,c=0;
    if(!d<10  && !b||c){
        printf("C in depth\n");//C in depth
    }
    else{
        printf("see in depth\n");
    }

    int e=0;
    if(e=0){
        printf("e is 0\n");
    }
    else{
        printf("e is not 0\n");//e is not 0
    }
    printf("the vlaue os e is %d\n",e);//the value of e is 0

    int f=20,g=5;
    if(f<10){
        a=a-5;
        b=b+5;
    }
    printf("%d %d\n",f,g);//20 5

    int h=0,i=0;
    if(!h)
    {
        i=!h;
        if(i){
            h=!i;
        }
    }
    printf("%d %d\n",h,i);//0 1
   
   
    int k=10;
    switch(k)
    {
        case '5': //case value intialization wrong
        case '10':
            k++;
            //continue;   //continue used only in loop
        case '15':
        case '20':
        k--;
    }
  

    int var=2,x=1,y=2;
    switch(var)
    {
        //case x:
        x++;
        break;
        //case y:
        y++;
        break;
    }

    int i,total=0;
    for(i=0;i<=10;i++)
    {
        switch(i)
        {
            case 1:
            case 4:
            case 5:
            case 7:
            total+=i;
            break;
            default:
            continue;
        }
        printf("%d ",i);    // 1,4,5,7
    }
    printf("total=%d\n",total); // total=17

    int x=2,y=20;
    switch(x)
    {
        y=30; // cann't execute
        case 1:
        y++;
        break;
        case 2:
        y--;
        break;
        default:
        y=y+2;
    }
    printf(" y is %d\n",y); // y is 19
    
    int a=5;
    begin:
    if(a)
    {
        printf("%d",a);// 5,4,3,2,1
        a--;
        goto begin;
    }


    for (int i = 1; i <= 5; i++) 
    {
        int num = num * 10 + 1;  // build the number: 1, 11, 111, ...
        printf("%d ", num);
    }

    int i,j,x=0;
    for(i=0;i<5;i++)
    {
        for(j=i;j>0;j--)
        {
            x=i+j+1;
        }
    }
    printf("x=%d\n",x); // x=6
   
    int sum,i;
    for(i=0;i<10;i+=3);
    {
        sum+=i*i;
    }
    printf("sum=%d\n",sum); // sum=144
 

    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",i); // 0,1,2,3,4
    }
    printf("\n");
    i=10;
    while(i<5)
    {
        printf("%d ",i++);
    }
    printf("\n");
    i=0;
    while(i<5)
    {
        printf("%d ",i++); // 0,1,2,3,4
    }
   

    int i=1;
    while(i++ < 5)
    {
        printf("%d ", i);//2,3,4,5
    }
    printf("\n");
    i=1;
    while(++i < 5)
    {
        printf("%d ",i);//2,3,4
    }
    printf("\n");
    i=6;
    while(i--)
    {
        printf("%d ",i);//5,4,3,2,1,0
    }
   

    int i=0;
    do
    {
        i++;
        printf("%d",i);
    } while (i<=5);
   return 0;
}