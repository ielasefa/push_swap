#include "push_swap.h"

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
    write(1 , "sa\n", 3);
}

void sb(t_stack **stack_b)
{
    swap(stack_b);
    write(1 , "sb\n", 3);
}

void ss(t_stack **stack_a, t_stack **stack_b)
{
    swap(stack_a);
    swap(stack_b);
    write(1 , "ss\n" ,3);
}

