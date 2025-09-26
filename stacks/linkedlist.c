#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct Node {
    int data;
    struct Node* next;
};
int isEmpty(struct Node* head) {
    return head == NULL;
}
void push(struct Node** head, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}
void pop(struct Node** head) {
    if (isEmpty(*head)) {
        printf("Stack is empty. Nothing to pop.\n");
        return;
    }
    struct Node* temp = *head;
    printf("Popped element: %d\n", temp->data);
    *head = (*head)->next;
    free(temp);
}
int peek(struct Node* head) {
    if (!isEmpty(head)) return head->data;
    return INT_MIN;
}
void display(struct Node* head) {
    if (isEmpty(head)) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements (top to bottom):\n");
    struct Node* current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
}
int main() {
    struct Node* head = NULL;
    int choice, value, n;
    char cont;
    do {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push elements\n");
        printf("2. Pop element\n");
        printf("3. Peek top element\n");
        printf("4. Display stack\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("How many elements do you want to push? ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Enter element %d: ", i + 1);
                    scanf("%d", &value);
                    push(&head, value);
                }
                break;
            case 2:
                pop(&head);
                break;
            case 3:
                value = peek(head);
                if (value != INT_MIN)
                    printf("Top element: %d\n", value);
                else
                    printf("Stack is empty.\n");
                break;
            case 4:
                display(head);
                break;
            case 5:
                printf("Exiting...\n");
                while (!isEmpty(head)) {
                    pop(&head);
                }
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        printf("\nDo you want to continue? (Y/N): ");
        scanf(" %c", &cont);
    } while (cont == 'Y' || cont == 'y');
    printf("Program terminated.\n");
    return 0;
}
