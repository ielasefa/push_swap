 #include "push_swap.h"

 void free_stack(t_stack *stack)
{
    t_stack *tmp;

    while (stack)
    {
        tmp = stack->next;  
        free(stack);        
        stack = tmp;        
    }
}

void free_split(char **split)
{
    int i = 0;

    if (!split)
        return;
    while (split[i])
    {
        free(split[i]);
        i++;
    }
    free(split);
}

int  free_input( char * input)
{
    free(input);
    return (1);

}