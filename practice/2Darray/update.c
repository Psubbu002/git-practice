//update the 2D array elements with just the next prime,if it is not prime
#include <stdio.h>
#include <math.h>
int isPrime(int num) 
{
    if(num <= 1) return 0;
    for(int i = 2; i <= sqrt(num); i++) 
    {
        if(num % i == 0)
            return 0;
    }
    return 1;
}
int nextPrime(int num) 
{
    int n = num + 1;
    while(!isPrime(n)) n++;
    return n;
}

int main(void) 
{
    int arr[100][100];
    int r, c;
    int i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<r;i++) 
    {
        for(j=0;j<c;j++) 
        {
            if(!isPrime(arr[i][j])) 
            {
                arr[i][j] = nextPrime(arr[i][j]);
            }
        }
    }
    printf("\nUpdated 2D array:\n");
    for(i=0;i<r;i++) 
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}