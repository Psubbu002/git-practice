#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node *prev, *next;
};
struct Deque 
{
    struct Node *front, *rear;
    int size;
};
struct Deque* createDeque() 
{
    struct Deque* dq = (struct Deque*)malloc(sizeof(struct Deque));
    dq->front = dq->rear = NULL;
    dq->size = 0;
    return dq;
}
int isEmpty(struct Deque* dq) 
{ 
    return dq->front == NULL; 
}
int getSize(struct Deque* dq) 
{ 
    return dq->size; 
}
void insertFront(struct Deque* dq, int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = dq->front;
    if (isEmpty(dq)) 
    {
        dq->front = dq->rear = newNode;
    } 
    else 
    {
        dq->front->prev = newNode;
        dq->front = newNode;
    }
    dq->size++;
    printf("%d inserted at front.\n", data);
}
void insertRear(struct Deque* dq, int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = dq->rear;
    if (isEmpty(dq)) 
    {
        dq->front = dq->rear = newNode;
    } 
    else 
    {
        dq->rear->next = newNode;
        dq->rear = newNode;
    }
    dq->size++;
    printf("%d inserted at rear.\n", data);
}
void deleteFront(struct Deque* dq) 
{
    if (isEmpty(dq)) 
    {
        printf("Underflow: Deque is empty.\n");
        return;
    }
    struct Node* temp = dq->front;
    int removed = temp->data;
    dq->front = dq->front->next;
    if (dq->front) 
    {
        dq->front->prev = NULL;
    } 
    else 
    {
        dq->rear = NULL;
    }
    free(temp);
    dq->size--;
    printf("%d deleted from front.\n", removed);
}
void deleteRear(struct Deque* dq) 
{
    if (isEmpty(dq)) 
    {
        printf("Underflow: Deque is empty.\n");
        return;
    }
    struct Node* temp = dq->rear;
    int removed = temp->data;
    dq->rear = dq->rear->prev;
    if (dq->rear) 
    {
        dq->rear->next = NULL;
    }
    else 
    {
        dq->front = NULL;
    }
    free(temp);
    dq->size--;
    printf("%d deleted from rear.\n", removed);
}
int getFront(struct Deque* dq) 
{
    return isEmpty(dq) ? -1 : dq->front->data;
}
int getRear(struct Deque* dq) 
{
    return isEmpty(dq) ? -1 : dq->rear->data;
}
void clear(struct Deque* dq) 
{
    while (!isEmpty(dq)) 
    {
        deleteFront(dq);
    }
    printf("Deque cleared.\n");
}
void display(struct Deque* dq) 
{
    if (isEmpty(dq)) 
    {
        printf("Deque is empty.\n");
        return;
    }
    struct Node* current = dq->front;
    printf("Deque elements: ");
    while (current != NULL) 
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
int main() 
{
    struct Deque* dq = createDeque();
    int choice, element;
    printf("\n--- Deque Menu ---\n");
    printf("1. Insert at front\n");
    printf("2. Insert at rear\n");
    printf("3. Delete from front\n");
    printf("4. Delete from rear\n");
    printf("5. Get front\n");
    printf("6. Get rear\n");
    printf("7. Get size\n");
    printf("8. Display deque\n");
    printf("9. Clear deque\n");
    printf("10. Exit\n");
    while (1) 
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter element to insert at front: ");
                scanf("%d", &element);
                insertFront(dq, element);
                break;
            case 2:
                printf("Enter element to insert at rear: ");
                scanf("%d", &element);
                insertRear(dq, element);
                break;
            case 3:
                deleteFront(dq);
                break;
            case 4:
                deleteRear(dq);
                break;
            case 5:
                if (!isEmpty(dq))
                    printf("Front element: %d\n", getFront(dq));
                else
                    printf("Deque is empty.\n");
                break;
            case 6:
                if (!isEmpty(dq))
                    printf("Rear element: %d\n", getRear(dq));
                else
                    printf("Deque is empty.\n");
                break;
            case 7:
                printf("Deque size: %d\n", getSize(dq));
                break;
            case 8:
                display(dq);
                break;
            case 9:
                clear(dq);
                break;
            case 10:
                clear(dq);
                free(dq);
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please select between 1 and 10.\n");
        }
    }
    return 0;
}