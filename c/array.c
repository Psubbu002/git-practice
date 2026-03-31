#include <stdio.h>
#define N 6
void fun1(int arr[])
{
    int i=5,sum=0;
    while(i>2)
    {
        sum=sum+arr[--i];
    }
    printf("sum using function = %d\n",sum);
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

void fun2(int arr[],int x,int y)
{
    if(x>y)
        return;
    fun2(arr,x+1,y);
    printf("%d ",arr[x]);
}

int fun3(int arr[],int size)
{
    int m;
    if(size==1)
        return arr[0];
    m=fun3(arr,size-1);
    if(arr[size-1]<m)
        return arr[size-1];
    else
        return m;
}

int fun4(int arr[],int size)
{
    if(size==0)
        return 0;
    if(arr[size]%2==0)
        return 1+fun4(arr,size-1);
    else
        return fun4(arr,size-1);
}

int fun5(int arr[],int size)
{
    if(size==0)
        return 0;
    return arr[size-1]+fun5(arr,size-1);
}

int fun6(int arr[],int low,int high)
{
    int mid,left,right;
    if(low==high)
        return arr[low];
    mid=(low+high)/2;
    left=fun6(arr,low,mid);
    right=fun6(arr,mid+1,high);
    if(left<right)
        return left;
    else
        return right;
}

int main()
{
    int i,j;
    int arr1[6]={4,2,6,0,5,10};
    int x=0,y=0;
    while(arr1[x])
    {
        y+=arr1[x];
        x++;
    }
    printf("j=%d\n",y);

    int a1[10],b1[3][4],c1[2][3][5];
    printf("sizeof a1=%lu\tsizeof b1=%lu\t%lu\n",sizeof(a1),sizeof(b1),sizeof(c1));

    int arr2[4]={2,4,8,16},k=3,sum=0;
    while(k)
    {
        sum+=arr2[k];
        k--;
    }
    printf("sum = %d\n",sum);

    int arr3[5]={5,10,15,20,25};
    fun1(arr3);

    int a=4,b=6;
    swapvar(a,b);
    printf("a=%d,b=%d\n",a,b);

    int arr4[5]={1,2,3,4,5};
    int arr5[5]={6,7,8,9,10};
    swaparr(arr4,arr5);
    printf("arr1[0]=%d arr1[4]=%d\n",arr4[0],arr4[4]);
    printf("arr2[0]=%d arr2[4]=%d\n",arr5[0],arr5[4]);

    int arr6[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    printf("the elements :\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%3d",arr6[j][i]);
        }
        printf("\n");
    }

    int fib[N];
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<N;i++)
        fib[i]=fib[i-1]+fib[i-2];
    printf("Fibonacies form 1 to %d\n",N);
    for(i=0;i<N;i++)
        printf("%d ",fib[i]);

    printf("\n");

    /* Recursive reverse print */
    int arr7[10]={1,6,2,7,3,4,8,10,9,5};
    printf("Recursive reverse array:\t");
    fun2(arr7,4,7);
    printf("\n");

    /* Minimum */
    int arr8[6]={2,3,1,4,6,34};
    printf("minimum is %d\n",fun3(arr8,6));

    /* Even count */
    int arr9[6]={1,2,3,4,8,10};
    printf("even count is %d\n",fun4(arr9,6));

    /* Sum */
    printf("sum = %d\n",fun5(arr9,6));

    /* Divide and conquer minimum */
    int arr10[6]={3,4,2,11,8,10};
    printf("minimum is %d\n",fun6(arr10,0,5));
    return 0;
}