#include <stdio.h>
typedef struct 
{
    int id;
    char name[50];
} Student;
int main() 
{
    Student s1;
    s1.id = 101;
    snprintf(s1.name, sizeof(s1.name), "Alice");
    printf("Student ID: %d\n", s1.id);
    printf("Student Name: %s\n", s1.name);
    return 0;
}