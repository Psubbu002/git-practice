#include <stdio.h>
int main(void)
{
   
    int a=5,*ptr;
    ptr=&a;
    printf("enter a number");   
    scanf("%d",ptr);        //16
    printf("%d %d",a,*ptr);     //16 16

    int *ptr;
    printf("enter a number:");  
    scanf("%d",ptr);    //5
    printf("%d \n",*ptr);   //5
   
    int arr[5];
    for(int i=0;i<5;i++)
    {
        printf("%p\n",arr+i);   //0061FF000061FF040061FF080061FF0C0061FF10
    }
    printf("enter 5 numbers:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",arr+i);  //1 2 3 4 5
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\t",*(arr+i));    // 1 2 3 4 5
    }
    
    int arr[5]={25,30,35,40,45},*p;
    p=arr;
    for(int i=0;i<5;i++)
    {
        printf("%d\t%d\n",*(p+i),p[i]);     //25 25 30 30 35 35 40 40
    }
    //printf("%d\t%d\t",*(p+i),p[i]);
    
    int arr[5]={25,30,35,40,45},*p;
    p=&arr[4];
    for(int i=0;i<5;i++)
    {
        printf("%d\t%d\t",*(p-i),p[-i]);    //45 45 40 40 35 35 30 30 25 25
    }
   
    int arr[5]={25,30,35,40,45},*p;
    for(int i=0;i<5;i++)
    {
        printf("%d",*arr);
        arr++;  //error
    }
    
    int arr[5]={25,30,35,40,45},*p=arr;
    for(int i=0;i<5;i++)
    {
        (*p)++;
        printf("%d   ",*p); //26 31 36 41 46
        p++;  
    }
   
    int arr[5]={25,40,55,70,85},*p=arr;
    for(int i=0;i<5;i++)
    {
        printf("%d ",*p++);     //25 40 55 70 85
    }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",*p--);     //0 85 70 55 40
    }
    printf("\n");
    
    int arr[5]={25,40,55,70,85},*p=arr;
    for(int i=0;i<8;i++)
    {
        printf("%d ",++*p);     //26 27 28 29 20 31 32 33
    }
    printf("\n");
    for(int i=0;i<7;i++)
    {
        printf("%d ",(*p)++);     //33 34 35 36 37 38 39
    }
    printf("\n");
    
    int arr[10]={25,30,35,40,55,60,65,70,85,90},*p;
    for(p=&arr[0];p<arr+10;p++)
    {
        printf("%d ",p);    //6422260 6422264 6422268 6422272 6422276 6422280 6422284 6422288 6422292 6422296 
    }
   
    int arr[10]={25,30,35,40,55,60,65,70,85,90},*p;
    for(p=arr+2;p<arr+8;p=p+2)
    {
        printf("%d ",*p);    //35 55 65
    }
    
    int arr[10]={25,30,35,40,55,60,65,70,85,90},*p=arr+9;
    for(int i=0;i<10;i++)
    {
        printf("%d ",*p--);    //90 85 70 65 60 55 40 35 30 25 
    }
    
    int arr[10]={25,30,35,40,55,60,65,70,85,90},*p;
    for(p=arr+9;p>=arr;p--)
    {
        printf("%d ",*p);    //90 85 70 65 60 55 40 35 30 25 
    }
    
    int arr[4]={10,20,30,40};
    int x=100,*ptr=arr;
    printf("%p  %d  %d\n",ptr,*ptr,x);  //add   10  100
    x=*ptr++;
    printf("%p  %d  %d\n",ptr,*ptr,x);  //add   20    10
    x=*++ptr;
    printf("%p  %d  %d\n",ptr,*ptr,x);  //add   30   30
    x=++*ptr;
    printf("%p  %d  %d\n",ptr,*ptr,x);  //add   31    31
    x=(*ptr)++;
    printf("%p  %d  %d\n",ptr,*ptr,x);  //add   32  31
    
    int x,arr[8]={11,22,33,44,55,66,77,88};
    x=(arr+2)[3];
    printf("%d\n",x);   //66
  
   float a=5,*p,**pp;
    p=&a;
    pp=&p;
    printf("%f\t%p\t%p\n",a,p,pp);
    a=a+1;
    p=p+1;
    pp=pp+1;
    printf("%f\t%d\t%d\n",a,p,pp);
    return 0;
}