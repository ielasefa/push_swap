 #include "push_swap_bonus.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

void set_ins(t_stack **stack_a, t_stack **stack_b, char *line)
{
    if (!ft_strncmp("sa\n", line, 3))
        sa(stack_a);
    else if (!ft_strncmp("sb\n", line, 3))
        sb(stack_b);
    else if (!ft_strncmp("ss\n", line, 3))
        ss(stack_a, stack_b);
    else if (!ft_strncmp("pa\n", line, 3))
        pa(stack_a, stack_b);
    else if (!ft_strncmp("pb\n", line, 3))
        pb(stack_a, stack_b);
    else if (!ft_strncmp("ra\n", line, 3))
        ra(stack_a);
    else if (!ft_strncmp("rb\n", line, 3))
        rb(stack_b);
    else if (!ft_strncmp("rr\n", line, 3))
        rr(stack_a, stack_b);
    else if (!ft_strncmp("rra\n", line, 4))
        rra(stack_a);
    else if (!ft_strncmp("rrb\n", line, 4))
        rrb(stack_b);
    else if (!ft_strncmp("rrr\n", line, 4))
        rrr(stack_a, stack_b);
    else
    {
        free(line); 
        free_stack(*stack_a);
        free_stack(*stack_b); 
        write(2, "Error\n", 6);
        exit(1);
    }
}