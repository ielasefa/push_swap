#include "push_swap.h"

void rra(t_stack **stack_a)
{
    t_stack *last;
    t_stack *second_last;

    if (!*stack_a || !(*stack_a)->next)
        return;

    second_last = *stack_a;
    while (second_last->next->next)
        second_last = second_last->next;

    last = second_last->next;
    second_last->next = NULL;
    last->next = *stack_a;
    *stack_a = last;
     write(1 , "rra\n", 4);
}

void rrb(t_stack **stack_b)
{
    t_stack *last;
    t_stack *second_last;

    if (!*stack_b || !(*stack_b)->next)
        return;

    second_last = *stack_b;
    while (second_last->next->next)
        second_last = second_last->next;

    last = second_last->next;
    second_last->next = NULL;
    last->next = *stack_b;
    *stack_b = last;
     write(1 , "rrb\n", 4);
}

void rrr(t_stack **stack_a, t_stack **stack_b)
{
    rra(stack_a);
    rrb(stack_b);
     write(1 , "rrr\n", 4);
}


