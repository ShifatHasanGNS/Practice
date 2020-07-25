#include <iostream>
#define STACK_MAX_SIZE 87

using namespace std;

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

    cout << pop(&stack) << endl;

    push(&stack, 5);
    push(&stack, 16);
    push(&stack, 79.58);

    cout << pop(&stack) << endl;
    cout << pop(&stack) << endl;
    cout << pop(&stack) << endl;
    
    cout << pop(&stack) << endl;
    
    return 0;
}