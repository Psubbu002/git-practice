#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of lines:");
    scanf("%d",&n);

    printf("\t\taccending order patterns:\t\t\n");
    printf("Start pattern:\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("same number pattern:\n");
    for(int k=1;k<=n;k++)
    {
        for(int l=1;l<=k;l++)
        {
            printf("%d",k);
        }
        printf("\n");
    }

    printf("number pattern1:\n");
    for(int m=1;m<=n;m++)
    {
        for(int o=1;o<=m;o++)
        {
            printf("%d",o);
        }
        printf("\n");
    }

    printf("number pattern2:\n");
    for(int a=1;a<=n;a++)
    {
        for(int b=1;b<=a;b++)
        {
            printf("%d",a+b);
        }
        printf("\n");
    }

    printf("0&1 pattern:\n");
    for(int c=1;c<=n;c++)
    {
        for(int d=1;d<=c;d++)
        {
            if((c+d)%2==0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }

    printf("number pattern3:\n");
    for(int e=1;e<=n;e++)
    {
        for(int f=1;f<=e;f++)
        {
            printf("%d",(n+1-f));
        }
        printf("\n");
    }

    printf("number pattern4:\n");
    for(int g=1;g<=n;g++)
    {
        for(int h=1;h<=g;h++)
        {
            printf("%d",(n+1-g));
        }
        printf("\n");
    }

    printf("number pattern5:\n");
    int r=1;
    for(int p=1;p<=n;p++)
    {
        for(int q=1;q<=p;q++)
        {
            printf("%3d",r++);
        }
        printf("\n");
    }
    
    printf("\t\tdescending pattern:\t\t\n");
    printf("reverse patterns1:\n");
    for(int a=1;a<=n;a++)
    {
        for(int b=1;b<=n+1-a;b++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("reverse pattern2:\n");
    for(int c=1;c<=n;c++)
    {
        for(int d=1;d<=n+1-c;d++)
        {
            printf("%d",c);
        }
        printf("\n");
    }

    printf("reverse pattern3:\n");
    for(int e=1;e<=n;e++)
    {
        for(int f=1;f<=n+1-e;f++)
        {
            printf("%d",f);
        }
        printf("\n");
    }

    printf("reverse pattern4:\n");
    for(int g=1;g<=n;g++)
    {
        for(int h=1;h<=n+1-g;h++)
        {
            printf("%d",(n+1-g));
        }
        printf("\n");
    }

    printf("reverse pattern5:\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1-i;j++)
        {
            printf("%d",(n+1-j));
        }
        printf("\n");
    }
    
    //printf("pyramid:\n");
    printf("star pyramid1:\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }

    printf("star pyramid2:\n");
    for(int k=1;k<=n;k++)
    {
        for(int l=1;l<=n-k;l++)
            printf(" ");
        for(int l=1;l<=k;l++)
            printf("*");
        printf("\n");
    }

    printf("star pyramid3:\n");
    for(int a=1;a<=n;a++)
    {
        for(int b=1;b<=n-a;b++)
            printf(" ");
        for(int b=1;b<=a;b++)
            printf("%d ",b);
        printf("\n");
    }

    printf("star pyramid4:\n");
    for(int e=1;e<=n;e++)
    {
        for(int f=1;f<=n-e;f++)
            printf(" ");
        for(int f=1;f<=e;f++)
            printf("%d",f);
        printf("\n");
    }

    printf("pyramid 1:\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("pyramid 2:\n");
    for(int k=1;k<=n;k++)
    {
        for(int l=1;l<=n-k;l++)
        {
            printf(" ");
        }
        for(int l=1;l<=2*k-1;l++)
        {
            printf("* ");
        }
        printf("\n");
    }

    printf("pyramid 3:\n");
    for(int a=1;a<=n;a++)
    {
        for(int b=1;b<=n-a;b++)
        {
            printf(" ");
        }
        for(int b=1;b<=2*a-1;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }

    printf("pyramid 4:\n");
    for(int c=1;c<=n;c++)
    {
        for(int d=1;d<=n-c;d++)
        {
            printf(" ");
        }
        for(int d=1;d<=2*c-1;d++)
        {
            printf("%d",c);
        }
        printf("\n");
    }

    printf("pyramid 4:\n");
    int g;
    for(int e=1;e<=n;e++)
    {
        for(int f=1;f<=e;f++)
        {
            printf(" ");
        }
        g=n+1-e;
        for(int f=1;f<=n-e+1;f++)
        {
            printf("%d",g++);
        }
        g=g-2;
        for(int f=1;f<=n-e;f++)
        {
            printf("%d",g--);
        }
        printf("\n");
    }

    printf("pyramid 5:\n");
    int h;
    for(int o=1;o<=n;o++)
    {
        for(int p=1;p<=o;p++)
        {
            printf(" ");
        }
        h=n;
        for(int p=1;p<=n-o+1;p++)
        {
            printf("%d",h--);
        }
        h=h+2;
        for(int p=1;p<=n-o;p++)
        {
            printf("%d",h++);
        }
        printf("\n");
    }

    int p;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        p=n;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",p--);
        }
        p=p+2;
        for(int j=1;j<i-1;j++);
        {
            printf("%d ",p++);
        }
        printf("\n");
    }

    int p1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        p1=i;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",p1++);
        }
        p1=p1-2;
        for(int j=1;j<i-1;j++);
        {
            printf("%d ",p1--);
        }
        printf("\n");
    }
    return 0;
}