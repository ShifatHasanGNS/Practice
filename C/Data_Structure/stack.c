#include <stdio.h>
#define STACK_MAX_SIZE 500000

// Stack Data_Structure
typedef struct
{
    int top, data[STACK_MAX_SIZE];
}Stack;

int push(Stack *stack, int item)
{
    if(stack->top < STACK_MAX_SIZE)
    {
        stack->data[stack->top] = item;
        stack->top++;
        return 0;
    }
    else return -1;
}

int pop(Stack *stack)
{
    if(stack->top == 0) return -1;
    stack->top--;
    return stack->data[stack->top];
}

//-------------------------------------------------------------------------------//


int main()
{
    Stack stack;

    printf("%d\n", pop(&stack));

    push(&stack, 5);
    push(&stack, 6);
    push(&stack, 7);

    printf("%d\n", pop(&stack));
    printf("%d\n", pop(&stack));
    printf("%d\n", pop(&stack));

    printf("%d\n", pop(&stack));
    
    return 0;
}