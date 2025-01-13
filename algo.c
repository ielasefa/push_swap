#include "push_swap.h"

int	array_sorted(t_stack **stack_a)
{
	int		size;
	int		i;
	int		j;
	t_stack	*temp;
	int		dst;
	int 	tmp;

	size = 0;
	i = 0;
	temp = *stack_a;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	dst = (int *)malloc(sizeof(int) * (size + 1));
	if (!dst)
		return (NULL);
	temp = *stack_a;
	while (temp)
	{
		dst[i++] = temp->content;
		temp = temp->next;
	}
	dst[size] = '\0';
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (dst[j] > dst[j + 1])
			{
				tmp = dst[j];
				dst[j] = dst[j + 1];
				dst[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	return (dst);
}

void sort_revirse(t_stack **stack_a ,t_stack**stack_b ,char *arr )
{
	int start;
	int end;

	start = 0;
	end = start + 1;
	
	while(*stack_a)
	{
		if(arr[start] == *stack_a)
		{
			pa(*stack_a);
		}
		else if(arr[end] == *stack_a)
		{
			pa(*stack_a);
			rb(*stack_b);
		}
		else
			ra(*stack_a);
	}
}

