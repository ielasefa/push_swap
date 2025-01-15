#include "push_swap.h"

void ra(t_stack **stack_a)
{
    t_stack *first;
    t_stack *last;

    if (!(*stack_a) || !(*stack_a)->next)
        return;

    first = *stack_a;
    *stack_a = (*stack_a)->next;
    last = last_node(*stack_a);

    last->next = first;
    first->next = NULL;
    write(1 , "ra\n", 3);
}

void rb(t_stack **stack_b)
{
    t_stack *first;
    t_stack *last;

    if (!(*stack_b) || !(*stack_b)->next)
        return;

    first = *stack_b;
    *stack_b = (*stack_b)->next;
    last = last_node(*stack_b);

    last->next = first;
    first->next = NULL;
    write(1 , "rb\n", 3);
}

void rr(t_stack **stack_a, t_stack **stack_b)
{
    ra(stack_a);
    rb(stack_b);
     write(1 , "rr\n", 3);
}
