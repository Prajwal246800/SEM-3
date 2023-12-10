#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Stack
{
    struct Node* top;
};
void initializeStack(struct Stack *stack)
{
    stack->top = NULL;
}
bool isEmpty(struct Stack *stack)
{
    return (stack->top == NULL);
}
struct Node* createNode(int value)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
void push(struct Stack *stack, int value)
{
    struct Node* newNode = createNode(value);
    newNode->next = stack->top;
    stack->top = newNode;
    printf("Pushed %d onto the stack\n", value);
}
int pop(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack Underflow! Cannot pop from an empty stack\n");
        return -1; 
    }
    struct Node* temp = stack->top;
    int poppedValue = temp->data;
    stack->top = temp->next;
    free(temp);
    return poppedValue;
}
int peek(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty, cannot peek\n");
        return -1; 
    }
    return stack->top->data;
}
void display(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty, nothing to display\n");
        return;
    }
    printf("Elements in the stack are: ");
    struct Node* current = stack->top;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    struct Stack stack;
    initializeStack(&stack);
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    display(&stack);
    printf("Peeked element: %d\n", peek(&stack));
    printf("Popped element: %d\n", pop(&stack));
    display(&stack);
    return 0;
}
