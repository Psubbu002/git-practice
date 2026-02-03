#include <stdio.h>
#define N 6
#if(0)
void fun(int arr[])
    {
        int i=5,sum=0;
        while(i>2)
        {
            sum=sum+arr[--i];
        }
        printf("%d",sum);
    }

void swapvar(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swaparr(int arr1[5],int arr2[5])
{
    int i,temp;
    for(i=0;i<5;i++)
    {
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
}

void fun(int arr[],int i,int j)
{
    if(i>j)
    {
        return;
    }
    fun(arr,i+1,j);
    printf("%d ",arr[i]);
}

int fun(int arr[],int size)
{
    int m;
    if(size==1)
    {
        return arr[0];
    }
    m=fun(arr,size-1);
    if(arr[size]<m)
    {
        return arr[size-1];
    }
    else{
        return m;
    }
}

int fun(int arr[],int size)
{
    if(size==0)
    {
        return 0;
    }
    else if(arr[size]%2==0)
    {
        return 1+fun(arr,size-1);
    }
    else{
        return fun(arr,size-1);
    }
}

int fun(int arr[],int size)
{
    if(size==0)
    {
        return 0;
    }
    return arr[size-1]+fun(arr,size-1);
}
#endif
int fun(int arr[],int low,int high)
{
    int mid,left,right;
    if(low==high)
    {
        return arr[low];
    }
    mid=(low+high)/2;
    left=fun(arr,low,mid);
    right=fun(arr,mid+1,high);
    if(left<right)
    {
        return left;
    }
    else{
        return right;
    }
}
int main(void)
{
    #if(0)
    int i,size=5,arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d ",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    
    int i=0,j=0,arr[6]={4,2,6,0,5,10};
    while(arr[i])
    {
        j+=arr[i];
        i++;
    }
    printf("j=%d\n",j);
    
    int x[10],y[3][4],z[2][3][5];
    printf("%u\t%u\t%u\n",sizeof(x),sizeof(y),sizeof(z));
    
    int arr[4]={2,4,8,16},i=3,j=0;
    while(i)
    {
        j+=arr[i];
        i--;
    }
    printf("%d",j);
    
    int arr[5]={5,10,15,20,25};
    fun(arr);
   
    int a=4,b=6;
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    swapvar(a,b);
    swaparr(arr1,arr2);
    printf("a=%d,b=%d\n",a,b);
    printf("arr1[0]=%d,arr1[4]=%d\n",arr1[0],arr1[4]);
    printf("arr2[0]=%d,arr2[4]=%d\n",arr2[0],arr2[4]);
    
    int i,j,arr[3][4]={ {1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%3d",arr[j][i]);
        }
        printf("\n");
    }
    
    int a[10]={2,-3,4,-5,6,7,1,9,-10,-11};
    int i,j,x,k=0;
    for(i=0;i<10;i++)
    {
        x=a[k];
        if(x<0)
        {
            for(j=k;j<10;j++)
            {
                a[j]=a[j+1];
            }
            a[9]=x;
        }
        else{
            k++;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    
    int i,a[N];
    a[0]=a[1]=1;
    for(i=2;i<N;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    
    int i,j,a[N]={1,2,3,4,5,6};
    for(i=0;i<N;i++)
    {
        for(j=0;j<i;j++)
        {
            a[i]+=a[j];
        }
    }
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    
    int i,j,a[N]={1};
    for(i=0;i<N;i++)
    {
        for(j=0;j<i;j++)
        {
            a[i]+=a[j];
        }
    }
    for ( i = 0; i < N; i++)
    {
        printf("%d  ",a[i]);
    }
    
    int arr[10]={1,6,2,7,3,4,8,10,9,5};
    fun(arr,2,7);
    
    int arr[10]={2,3,1,4,6,34};
    printf("%d\n",fun(arr,6));
    
    int i,j,a[N]={1,2,3,4,5,6};
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            a[i]+=a[j];
        }
    }
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    
    int arr[10]={1,2,3,4,8,10};
    printf("%d\n",fun(arr,6));
    
    int arr[10]={1,2,3,4,8,10};
    printf("%d \n",fun(arr,6));
    #endif
    int arr[10]={3,4,2,11,8,10};
    printf("%d\n",fun(arr,0,5));
    return 0;
}