#include "push_swap.h"

t_stack *add_node(int value)  
{
    t_stack *new_node;
    
    new_node = malloc(sizeof(t_stack));
    if (!new_node)
        return NULL;

    new_node->value = value;
    new_node->next = NULL; 
    return new_node;
}

t_stack *last_node(t_stack *stack) 
{
    if (!stack)
        return NULL;
        
    while (stack->next != NULL)
        stack = stack->next;
    return stack; 
}

void add_back(t_stack **stack, t_stack *new) 
{
    t_stack *last;

    if (!stack || !new)
        return;

    if (!*stack)  
    {
        *stack = new;
        return;
    }
    last = last_node(*stack);
    last->next = new;
}

int size_node(t_stack *stack)  
{
    int count = 0;

    while (stack != NULL)
    {
        count++;
        stack = stack->next;
    }
    return count;
}

t_stack *first_node(t_stack *stack)  
{
    if (!stack)
        return NULL;
    return stack;  
}
