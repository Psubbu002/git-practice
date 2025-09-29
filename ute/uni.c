#include <stdio.h>
#include <stdlib.h>
union Data 
{
    int i;
    float f;
    char str[20];
};
struct Node 
{
    int type;           
    union Data data;   
    struct Node* next;  
};
int main() 
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    head->type = 1; 
    head->data.i = 42;
    head->next = second;
    second->type = 2;  
    second->data.f = 3.14;
    second->next = third;
    third->type = 3;  
    snprintf(third->data.str, sizeof(third->data.str), "Hello");
    third->next = NULL;
    struct Node* current = head;
    while (current != NULL) 
    {
        if (current->type == 1) 
        {
            printf("Integer: %d\n", current->data.i);
        } 
        else if (current->type == 2) 
        {
            printf("Float: %.2f\n", current->data.f);
        } 
        else if (current->type == 3) 
        {
            printf("String: %s\n", current->data.str);
        }
        current = current->next;
    }
    free(head);
    free(second);
    free(third);
    return 0;
}