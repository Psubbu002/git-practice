#include <stdio.h>
#include <string.h> 
#include <limits.h>
#include <stdlib.h>
#define MAX 100000
struct item 
{
    int value, priority;
};
struct item pr[MAX];
int size = 0; 
void enqueue(int value, int priority) 
{
    if (size >= MAX) 
    {
        printf("Queue is full. Cannot insert more elements.\n");
        return;
    }
    pr[size++] = (struct item){value, priority};
}
int peek() 
{
    int lowestPriority = INT_MAX;
    int ind = -1;
    for (int i = 0; i < size; i++) 
    {
        if (pr[i].priority < lowestPriority || 
           (pr[i].priority == lowestPriority && (ind == -1 || pr[i].value > pr[ind].value))) 
        {
            lowestPriority = pr[i].priority;
            ind = i;
        }
    }
    return ind;
}
void dequeue() 
{
    if (size == 0) 
    {
        printf("Queue is empty.\n");
        return;
    }
    int ind = peek();
    for (int i = ind; i < size - 1; i++) 
    {
        pr[i] = pr[i + 1];
    }
    size--;
}
int compare(const void* a, const void* b) 
{
    struct item* item1 = (struct item*)a;
    struct item* item2 = (struct item*)b;
    if (item1->priority == item2->priority) 
    {
        return item2->value - item1->value; 
    }
    return item1->priority - item2->priority; 
}
void display() 
{
    if (size == 0) 
    {
        printf("Priority Queue is empty.\n");
        return;
    }
    struct item temp[MAX];
    memcpy(temp, pr, sizeof(struct item) * size);
    qsort(temp, size, sizeof(struct item), compare);
    printf("Priority Queue Elements (sorted by priority):\n");
    for (int i = 0; i < size; i++) 
    {
        printf("Value: %d, Priority: %d\n", temp[i].value, temp[i].priority);
    }
}
void getHighestPriority() 
{
    if (size == 0) 
    {
        printf("Queue is empty.\n");
        return;
    }
    int ind = peek();
    printf("Element with highest priority: Value = %d, Priority = %d\n", pr[ind].value, pr[ind].priority);
}
int main() 
{
    int choice, value, priority;
    printf("\t Priority Queue Menu \n");
    printf("1. Enqueue \n");
    printf("2. Dequeue \n");
    printf("3. Peek (View Highest Priority Element)\n");
    printf("4. Display Queue\n");
    printf("5. Exit");
    while (1) {
        printf("\nEnter your choice: ");
        if (scanf("%d", &choice) != 1) 
        {
            printf("Invalid input. Exiting.\n");
            break;
        }
        switch (choice) 
        {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Enter priority: ");
                scanf("%d", &priority);
                enqueue(value, priority);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                getHighestPriority();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Please select a valid option (1-5).\n");
        }
    }
    return 0;
}
