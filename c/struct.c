#include <stdio.h>
#include <string.h>
struct student{
    char name[20];
    int roll;
    int marks;
   // int submarks[4];
};

void display(char name[],int roll,int marks)
{
    printf("Name:%s\n",name);
    printf("Roll :%d \n",roll);
    printf("marks:%d\n",marks);
}

struct student change(struct student s1)
{
    s1.marks=s1.marks+1;
    s1.roll=s1.roll+2;
    return s1;
}
void display(struct student s1)
{
    printf("Name:%s\n",s1.name);
    printf("Roll :%d \n",s1.roll);
    printf("marks:%d\n",s1.marks);
}

void inc_marks(struct student *stuptr)
{
    (stuptr->marks)++;
}

struct student *fun(struct student *p1,struct student *p2)
{
    if(p1->marks > p2->marks)
    {
        return p1;
    }
    else{
        return p2;
    }
}
void display(struct student *stuptr)
{
    printf("Name:%s\n",stuptr->name);
    printf("Roll :%d \n",stuptr->roll);
    printf("marks:%d\n",stuptr->marks);
}

int main(void)
{
    //Accessing a structure
    struct student s1={"subbu",23,90.5};
    struct student s2,s3,s4;
    s4=s1;
    strcpy(s2.name,"raycha");
    s2.roll=22;
    s2.marks=95;
    printf("Enter the details of student s3:\n");
    scanf("%s %d %f",&s3.name,&s3.roll,&s3.marks);
    printf("Student 1:%s\t%d\t%f\n",s1.name,s1.roll,s1.marks);
    printf("Student 2:%s\t%d\t%f\n",s2.name,s2.roll,s2.marks);
    printf("Student 3:%s\t%d\t%f\n",s3.name,s3.roll,s3.marks);
    printf("Student 3:%s\t%d\t%f\n",s4.name,s4.roll,s4.marks);
    printf("size of structure :%d\n",sizeof(struct student));
   
    //Arrays within a array of structure 
    struct student std[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter data for student %d\n",i+1);
        printf("Name:");
        scanf("%s",std[i].name);
        printf("Roll:");
        scanf("%d ",&std[i].roll);
        for(int j=0;j<4;j++)
        {
            printf("subject %d:",j+1);
            scanf("%d",&std[i].submarks[j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        printf("Data of student :%d\n",i+1);
        printf("Name:%s\tRoll:%d\tSubmarks:",std[i].name,std[i].roll);
        for(int j=0;j<4;j++)
        {
            printf("%d\t",std[i].submarks[j]);
        }
        printf("\n");
    }
   
    //Structure Pointer
    struct student s1={"Raycha",23,98};
    struct student *ptr;
    ptr=&s1;
    printf("Name:%s\n",ptr->name);
    printf("roll:%d\n",ptr->roll);
    printf("Marks:%d\n",ptr->marks);
   
    //Passing structure members as arguments
    struct student s1={"subbu",2,25};
    display(s1.name,s1.roll,s1.marks);
    
    //Passing structure variable as argument
    struct student s1={"raycha",1,25};
    display(s1);
   
    //Passing pointers to structure as arguments
    struct student s1={"siva",2,24};
    inc_marks(&s1);
    display(&s1);
   
    //returning structure variable from function
    struct student s1={"krishna",1,24};
    s1=change(s1);
    display(s1);
   
    struct student *stuptr;
    struct student stu1={"swarna",1,20} , stu2={"deepu",2,21};
    stuptr=fun(&stu1,&stu2);
    display(stuptr);
    return 0;
}