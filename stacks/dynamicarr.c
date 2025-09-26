#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int *array;       
    int top;          
    int capacity;     
} Stack;
Stack *createStack(int initialCapacity) {
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->capacity = initialCapacity;
    stack->top = -1;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}
int isEmpty(Stack *stack) {
    return stack->top == -1;
}
void resizeStack(Stack *stack) {
    stack->capacity *= 2;
    stack->array = (int *)realloc(stack->array, stack->capacity * sizeof(int));
}
void push(Stack *stack, int value) {
    if (stack->top == stack->capacity - 1) {
        resizeStack(stack);
    }
    stack->array[++stack->top] = value;
    printf("Pushed %d \n", value);
}
int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow! Cannot pop.\n");
        return -1; 
    }
    return stack->array[stack->top--];
}
int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty! Cannot peek.\n");
        return -1; 
    }
    return stack->array[stack->top];
}
void freeStack(Stack *stack) {
    free(stack->array);
    free(stack);
}
int main() {
    Stack *stack = createStack(2); 
    push(stack, 10);
    push(stack, 20);
    push(stack, 30); 
    printf("Top element is %d\n", peek(stack));
    printf("Popped %d \n", pop(stack));
    printf("Popped %d \n", pop(stack));
    printf("Popped %d \n", pop(stack));
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
    }
    freeStack(stack);
    return 0;
}