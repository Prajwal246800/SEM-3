#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100

struct Stack
{
    int arr[MAX_SIZE];
    int top;
};

void initializeStack(struct Stack *stack)
{
    stack->top = -1;
}
bool isEmpty(struct Stack *stack)
{
    return (stack->top == -1);
}
bool isFull(struct Stack *stack)
{
    return (stack->top == MAX_SIZE - 1);
}
void push(struct Stack *stack, int value)
{
    if (isFull(stack))
    {
        printf("Stack Overflow! Cannot push element %d\n", value);
        return;
    }
    stack->arr[++stack->top] = value;
    printf("Pushed %d onto the stack\n", value);
}
int pop(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack Underflow! Cannot pop from an empty stack\n");
        return -1;
    }
    return stack->arr[stack->top--];
}
int peek(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty, cannot peek\n");
        return -1;
    }
    return stack->arr[stack->top];
}
void display(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty, nothing to display\n");
        return;
    }
    printf("Elements in the stack are: ");
    for (int i = 0; i <= stack->top; ++i)
    {
        printf("%d ", stack->arr[i]);
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
