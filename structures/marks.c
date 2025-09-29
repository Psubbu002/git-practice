#include <stdio.h>
struct Subjects 
{
    float physics;
    float chemistry;
    float maths;
    float biology;
};
struct Student 
{
    char name[50];
    int roll;
    struct Subjects sub; 
    float total;
    float average;
};
int main() {
    int n;
    printf("Enter number of students:");
    scanf("%d",&n);
    struct Student s[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter student %d name: ",i+1);
        scanf("%s", s[i].name);
        printf(" roll number: ");
        scanf("%d", &s[i].roll);
        printf(" Physics marks: ");
        scanf("%f", &s[i].sub.physics);
        printf(" Chemistry marks: ");
        scanf("%f", &s[i].sub.chemistry);
        printf(" Maths marks: ");
        scanf("%f", &s[i].sub.maths);
        printf(" Biology marks: ");
        scanf("%f", &s[i].sub.biology);
        printf("\n");
        s[i].total = s[i].sub.physics + s[i].sub.chemistry + s[i].sub.maths + s[i].sub.biology;
        s[i].average = s[i].total / 4.0;
    }
    printf("\n--- Student Result ---\n");
    for(int i=0;i<n;i++)
    {
        printf("Student %d\n",i+1);
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll);
        printf("Physics: %.2f\n", s[i].sub.physics);
        printf("Chemistry: %.2f\n", s[i].sub.chemistry);
        printf("Maths: %.2f\n", s[i].sub.maths);
        printf("Biology: %.2f\n", s[i].sub.biology);
        printf("Total Marks: %.2f\n", s[i].total);
        printf("Average Marks: %.2f\n", s[i].average);
        printf("\n");
    }
    return 0;
}