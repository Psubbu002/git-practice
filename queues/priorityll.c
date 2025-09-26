#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    int priority;
    struct node* next;
} Node;
Node* newNode(int d, int p) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = d;
    temp->priority = p;
    temp->next = NULL;
    return temp;
}
int peek(Node* head) {
    if (head == NULL) {
        printf("Queue is empty.\n");
        return -1;
    }
    return head->data;
}
Node* pop(Node* head) {
    if (head == NULL) {
        printf("Queue is empty.\n");
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}
Node* push(Node* head, int d, int p) {
    Node* start = head;
    Node* temp = newNode(d, p);
    if (head == NULL || head->priority > p) {
        temp->next = head;
        head = temp;
    } else {
        while (start->next != NULL && start->next->priority < p) {
            start = start->next;
        }
        temp->next = start->next;
        start->next = temp;
    }
    return head;
}
int isEmpty(Node* head) {
    return (head == NULL);
}
void display(Node* head) {
    if (head == NULL) {
        printf("Queue is empty.\n");
        return;
    }
    Node* temp = head;
    printf("Queue elements (data:priority):\n");
    while (temp != NULL) {
        printf("%d:%d -> ", temp->data, temp->priority);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    Node* pq = NULL;
    int choice, data, priority;
    printf("--- Priority Queue Menu ---\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Peek\n");
    printf("4. Display\n");
    printf("5. Exit\n");
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                printf("Enter priority : ");
                scanf("%d", &priority);
                pq = push(pq, data, priority);
                break;
            case 2:
                if (!isEmpty(pq)) {
                    printf("Deleted element: %d\n", peek(pq));
                    pq = pop(pq);
                } else {
                    printf("Queue is empty.\n");
                }
                break;
            case 3:
                if (!isEmpty(pq)) {
                    printf("Element at front: %d\n", peek(pq));
                } else {
                    printf("Queue is empty.\n");
                }
                break;
            case 4:
                display(pq);
                break;
            case 5:
                printf("Exiting...\n");
                while (!isEmpty(pq)) {
                    pq = pop(pq);
                }
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
