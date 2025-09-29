#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int deque[MAX];
int front = -1;
int rear = -1;
int isFull() 
{
    return ((front == 0 && rear == MAX - 1) || (front == rear + 1));
}
int isEmpty() 
{
    return (front == -1);
}
void insertFront(int key) 
{
    if (isFull()) 
    {
        printf("Overflow: Deque is full.\n");
        return;
    }
    if (front == -1) 
    {  
        front = rear = 0;
    } 
    else if (front == 0) 
    {
        front = MAX - 1;
    } 
    else 
    {
        front = front - 1;
    }
    deque[front] = key;
    printf("Inserted %d at the front.\n", key);
}
void insertRear(int key) 
{
    if (isFull()) 
    {
        printf("Overflow: Deque is full.\n");
        return;
    }
    if (rear == -1) 
    {  
        front = rear = 0;
    } 
    else if (rear == MAX - 1) 
    {
        rear = 0;
    } 
    else 
    {
        rear = rear + 1;
    }
    deque[rear] = key;
    printf("Inserted %d at the rear.\n", key);
}
void deleteFront() 
{
    if (isEmpty()) 
    {
        printf("Underflow: Deque is empty.\n");
        return;
    }
    int removed = deque[front];
    if (front == rear) 
    {  
        front = rear = -1;
    } 
    else if (front == MAX - 1) 
    {
        front = 0;
    } 
    else 
    {
        front = front + 1;
    }
    printf("Deleted %d from the front.\n", removed);
}
void deleteRear() 
{
    if (isEmpty()) 
    {
        printf("Underflow: Deque is empty.\n");
        return;
    }
    int removed = deque[rear];
    if (front == rear) 
    {
        front = rear = -1;
    } 
    else if (rear == 0) 
    {
        rear = MAX - 1;
    } 
    else 
    {
        rear = rear - 1;
    }
    printf("Deleted %d from the rear.\n", removed);
}
void displayDeque() 
{
    if (isEmpty()) 
    {
        printf("Deque is empty.\n");
        return;
    }
    printf("Deque elements: ");
    int i = front;
    while (1) 
    {
        printf("%d ", deque[i]);
        if (i == rear)
            break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}
int main() 
{
    int choice, element;
    printf("\n--- Deque Operations Menu ---\n");
    printf("1. Insert at front\n");
    printf("2. Insert at rear\n");
    printf("3. Delete from front\n");
    printf("4. Delete from rear\n");
    printf("5. Display deque\n");
    printf("6. Exit\n");
    while (1) 
    {
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
            printf("Enter element to insert at front: ");
            scanf("%d", &element);
            insertFront(element);
            break;
            case 2:
            printf("Enter element to insert at rear: ");
            scanf("%d", &element);
            insertRear(element);
            break;
            case 3:
            deleteFront();
            break;
            case 4:
            deleteRear();
            break;
            case 5:
            displayDeque();
            break;
            case 6:
            printf("Exiting program!\n");
            exit(0);
            default:
            printf("Invalid choice! Please select a valid option (1-6).\n");
        }
    }
    return 0;
}
