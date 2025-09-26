#include<stdio.h>
struct Student{
    char name[100];
    int roll;
    float marks;
}; 
int main()
{ 
    int n;
    printf("Enter number of students:");
    scanf("%d",&n);
    struct Student S[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the details of Student %d.",i+1);
        printf("\nName:");
        scanf("%s",S[i].name);
        printf("Roll No:");
        scanf("%d",& S[i].roll);
        printf("Marks:");
        scanf("%f",&S[i].marks);
    }
    printf("------Students Details-------");
    for(int i=0;i<n;i++)
    {
        printf("\nName:%s",S[i].name);
        printf("\nRoll Number:%d",S[i].roll);
        printf("\nMarks:%2.f",S[i].marks);
    }
    return 0;
}