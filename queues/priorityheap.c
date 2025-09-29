#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef struct 
{
    int data;
    int priority; 
} Element;
typedef struct 
{
    Element heap[MAX];
    int size;
    int mode; 
} PriorityQueue;
void swap(Element* a, Element* b) 
{
    Element temp = *a;
    *a = *b;
    *b = temp;
}
int compare(PriorityQueue* pq, int i, int j) 
{
    if (pq->mode == 1) 
    {
        return pq->heap[i].priority < pq->heap[j].priority; 
    } 
    else 
    {
        return pq->heap[i].priority > pq->heap[j].priority; 
    }
}
void heapifyUp(PriorityQueue* pq, int index) 
{
    int parent = (index - 1) / 2;
    if (index > 0 && !compare(pq, parent, index)) 
    {
        swap(&pq->heap[parent], &pq->heap[index]);
        heapifyUp(pq, parent);
    }
}
void heapifyDown(PriorityQueue* pq, int index) 
{
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    int target = index;
    if (left < pq->size && !compare(pq, target, left)) 
    {
        target = left;
    }
    if (right < pq->size && !compare(pq, target, right)) 
    {
        target = right;
    }
    if (target != index) 
    {
        swap(&pq->heap[index], &pq->heap[target]);
        heapifyDown(pq, target);
    }
}
void insert(PriorityQueue* pq, int data, int priority) 
{
    if (pq->size >= MAX) 
    {
        printf("Priority Queue is full.\n");
        return;
    }
    Element newElement = {data, priority};
    pq->heap[pq->size] = newElement;
    heapifyUp(pq, pq->size);
    pq->size++;
}
Element peek(PriorityQueue* pq) 
{
    if (pq->size == 0) 
    {
        printf("Priority Queue is empty.\n");
        Element empty = {-1, -1};
        return empty;
    }
    return pq->heap[0];
}
void deleteTop(PriorityQueue* pq) 
{
    if (pq->size == 0) 
    {
        printf("Priority Queue is empty.\n");
        return;
    }
    pq->heap[0] = pq->heap[pq->size - 1];
    pq->size--;
    heapifyDown(pq, 0);
}
void display(PriorityQueue* pq) 
{
    if (pq->size == 0) 
    {
        printf("Priority Queue is empty.\n");
        return;
    }
    printf("Priority Queue (%s):\n", pq->mode == 1 ? "Min-Heap" : "Max-Heap");
    for (int i = 0; i < pq->size; i++) 
    {
        printf("%d:%d ", pq->heap[i].data, pq->heap[i].priority);
    }
    printf("\n");
}
int main() 
{
    PriorityQueue pq;
    pq.size = 0;
    int data, priority, choice;
    while (1) 
    {
        printf("Choose Heap Type:\n");
        printf("1. Min-Heap\n");
        printf("2. Max-Heap\n");
        printf("Enter choice: ");
        scanf("%d", &pq.mode);
        if (pq.mode == 1 || pq.mode == 2) break;
        printf("Invalid choice.\n");
    }
 	printf("\n--- Priority Queue Menu (%s) ---\n", pq.mode == 1 ? "Min-Heap" : "Max-Heap");
    printf("1. Insert\n");
    printf("2. Delete Top\n");
    printf("3. Peek Top\n");
    printf("4. Display\n");
    printf("5. Exit\n");
    while (1) 
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                printf("Enter priority: ");
                scanf("%d", &priority);
                insert(&pq, data, priority);
                break;
            case 2:
                if (pq.size > 0) 
                {
                    Element top = peek(&pq);
                    printf("Deleted: %d (priority: %d)\n", top.data, top.priority);
                    deleteTop(&pq);
                } 
                else 
                {
                    printf("Priority Queue is empty.\n");
                }
                break;
            case 3:
                if (pq.size > 0) 
                {
                    Element top = peek(&pq);
                    printf("Top element: %d (priority: %d)\n", top.data, top.priority);
                } 
                else 
                {
                    printf("Priority Queue is empty.\n");
                }
                break;
            case 4:
                display(&pq);
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
}
