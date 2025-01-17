#include "push_swap.h"

t_stack *add_stack(int ac, char **av)
{
    t_stack *stack_a = NULL;
    t_stack *new_node;
    int i;
    i = 1;

    while (i < ac)
    {
        new_node = add_node(atoi(av[i]));
        if (!new_node)
            return NULL;

        add_back(&stack_a, new_node);
        i++;
    }
    return stack_a;
}

int main(int ac, char **av)
{
    int *arr;
    int size;
    t_stack *stack_a ;
    t_stack *stack_b ;

    stack_a = NULL;
    stack_b = NULL;

    if (ac == 1)
        return 0;     
    check_input(ac, av);
    stack_a = add_stack(ac, av);
    size = size_node(stack_a);
    arr = array_sorted(&stack_a);
    sort(&stack_a ,&stack_b , *arr ,size);     
    
    print_stack(stack_a);
    free(arr);

    return 0;
}
