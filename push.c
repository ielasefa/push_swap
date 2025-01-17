#include "push_swap.h"

void pa(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *second;

    if (!(*stack_b))
        return;

    second = *stack_b;
    *stack_b = second->next;
    second->next = *stack_a;
    *stack_a = second;
     write(1 , "pa\n", 3);
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
     write(1 , "pb\n", 3);
}