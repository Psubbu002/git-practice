//Basic calculator using switch case
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a,b,ch;
    printf("Enter the  number:");
    if(scanf("%d %d",&a,&b)!=2)  {
        printf("invalid\n");
        exit(0);
    }
    printf("----Menu---\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Modular division\n");
    while(1){
        printf("Enter the choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("%d + %d = %d\n",a,b,a+b);
            break;
            case 2:
            printf("%d - %d =%d\n",a,b,a-b);
            break;
            case 3:
            printf("%d * %d = %d\n",a,b,a*b);
            break;
            case 4:
            printf("%d / %d = %d\n",a,b,a/b);
            break;
            case 5:
            printf("%d % %d = %d\n",a,b,a%b);
            break;
            default:
            printf("invalid\n");
            exit(0);
        }
    }
   return 0;
}