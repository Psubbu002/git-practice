#include <stdio.h>
#include <stdlib.h>
struct employee{
    char name[20];
    int id;
    double salary;
};
int main()
{
    int n;
    printf("Enter number of employee:");
    scanf("%d",&n);
    struct employee *emp = malloc(n * sizeof(struct employee));
    if (emp == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }    
    for(int i=0;i<n;i++) {
        printf("Enter %d Employee details:\n",i+1);
        printf("Name:");
        scanf("%s",emp[i].name);
        printf("Employee ID:");
        scanf("%d",&emp[i].id);
        printf("Salary:");
        scanf("%lf",&emp[i].salary);
    }
    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d: Name: %s, ID: %d, Salary: %.2f\n", i + 1, emp[i].name, emp[i].id, emp[i].salary);
    }
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (emp[i].salary > emp[maxIndex].salary) {
            maxIndex = i;
        }
    }
    printf("\nEmployee with Highest Salary:\n");
    printf("Name: %s\n", emp[maxIndex].name);
    printf("ID: %d\n", emp[maxIndex].id);
    printf("Salary: %.2f\n", emp[maxIndex].salary);
    free(emp);
    return 0;
}