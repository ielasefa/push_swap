#include "push_swap.h"

t_stack *new_node(int value)
{
    t_stack *node = (t_stack *)malloc(sizeof(t_stack));
    node->value = value;
    node->next = NULL;
    return node;
} 

void swap(t_stack **stack)
{
    t_stack *first;
    t_stack *second;

    if (!stack || !(*stack))
        return;

    first = *stack;
    second = (*stack)->next;

    first->next = second->next;
    second->next = first;
    *stack = second;
}

void sa(t_stack **stack_a)
{
    swap(stack_a);
}

void sb(t_stack **stack_b)
{
    swap(stack_b);
}

void ss(t_stack **stack_a, t_stack **stack_b)
{
    swap(stack_a);
    swap(stack_b);
}

void pa(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *second;

    if (!(*stack_b))
        return;

    second = *stack_b;
    *stack_b = second->next;
    second->next = *stack_a;
    *stack_a = second;
}

void pb(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *first;

    if (!(*stack_a))
        return;
        
    first = *stack_a;
    *stack_a = first->next;
    first->next = *stack_b;
    *stack_b = first;
}