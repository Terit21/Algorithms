#include "stack.h"

struct Stack
{
};

Stack *stack_create()
{
    return new Stack;
}

void stack_delete(Stack* stack)
{
    // TODO: free stack elements
    while (!stack_empty)
    {
        stack_pop(stack);
    }
    delete list_first(stack->list);
    delete stack;
}

void stack_push(Stack *stack, Data data)
{
}

Data stack_get(const Stack *stack)
{
    return (Data)0;
}

void stack_pop(Stack *stack)
{
}

bool stack_empty(const Stack *stack)
{
    return true;
}
