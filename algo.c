#include "push_swap.h"

int	*array_sorted(t_stack **stack_a)
{
	int		size;
	int		i;
	int		j;
	t_stack	*curr;
	int		*arr;
	int tmp;

	if(!(*stack_a))
		return NULL;
	size = 0;
	size = size_node(*stack_a);
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	
	i = 0;
	curr = *stack_a;
	while (curr)
	{
		arr[i] = curr->value;
		curr = curr->next;
		i++;
	}
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}	
	return (arr);
}
void print_stack(t_stack *stack_b)
 {
	while (stack_b)
	{
        printf("%d ->", stack_b->value);
        stack_b = stack_b->next;
    }
	printf("NULL\n");
}

int max_value(t_stack *stack_b)
{
	int i;
	int MAX;
	int indix;

	MAX = stack_b->value;
	i = 0;
	indix = 0;

	while(stack_b)
	{
		if(MAX < stack_b->value)
		{
			MAX = stack_b->value;
			indix = i;
		}
		i++;
		stack_b = stack_b->next;
		
	}
	return indix;
}
void revirse_stack_a(t_stack **stack_a ,t_stack **stack_b)
{
	int	size;
	int max;

	while(*stack_b)
	{
		max = max_value(*stack_b);
		size = size_node(*stack_b);
		if(max <= size / 2)
		{
			while(max > 0)
			{
				rb(stack_b);
				max--;
			}
		}
		else
		{
			while(max < size)
			{
				rrb(stack_b);
				max++;
			}
		}	
		pa(stack_a ,stack_b);
	}

}

int	ft_is_small(t_stack *stack_a, int *arr, int index)
{
	int	i;

	i = 0;
	while (i <= index)
	{
		if (stack_a->value <= arr[i])
			return (1);
		i++;
	}
	return (0);
}

void sort_revirse(t_stack **stack_a ,t_stack**stack_b ,int *arr  ,int size)
{
	int start;
	int end;

	start = 0;
	end = size / 6;

	if (size > 100)
		end = size / 16;
	while(*stack_a)
	{ 
		if(ft_is_small(*stack_a ,arr ,start))
		{
			pb(stack_a ,stack_b);	
			rb(stack_b);
			if (end  < size -1)
				end++;
			if (start < end)
				start++;
		}
		else if(ft_is_small(*stack_a ,arr, end))
		{
			pb(stack_a ,stack_b);
		if (*stack_b && (*stack_b)->next
				&& (*stack_b)->value < (*stack_b)->next->value)
				sb(stack_b);
			if (end  < size -1)
				end++;
			if (start < end)
				start++;
		}
		else
			ra(stack_a);
	} 
 	revirse_stack_a(stack_a ,stack_b);
}

