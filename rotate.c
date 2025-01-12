#include "push_swap.h"

void ra(t_stack **stack_a)
{
    t_stack *first; 
    t_stack *last;

    if(!(*stack_a) || !stack_a)
        return;
    first = *stack_a;   
    *stack = (*stack)->next;
    last= last_node(*stack_a);
    last->next = first;
    first->next= NULL;
}

void rb(t_stack **stack_b)
{
    t_stack first;
    t_stack last;

    if(!(*stack_b) || !stack_b)
        return

    first = *stack_b;
    *stack = (*stack)->next
    last = last_node(*stack_b);
    last->next = first;
    first->next = NULL;
}

void rr(t_stack **stack_a ,t_stack **stack_b)
{
    ra(stack_a);
    rb(stack_b);
}
