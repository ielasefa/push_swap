/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_6_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:23:52 by iel-asef          #+#    #+#             */
/*   Updated: 2025/01/21 17:19:39 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_value(t_stack *stack_b)
{
	int	i;
	int	max;
	int	indix;

	max = stack_b->value;
	i = 0;
	indix = 0;
	while (stack_b)
	{
		if (max < stack_b->value)
		{
			max = stack_b->value;
			indix = i;
		}
		i++;
		stack_b = stack_b->next;
	}
	return (indix);
}

int	small(t_stack *stack_a, int *arr, int index)
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

void	sort_revirse(t_stack **stack_a, t_stack **stack_b, int *arr, int size)
{
	int start; 
	int end;
	
	start = 0;
	end = size / 6;
	if (size > 100)
		end = size / 14;
	while (*stack_a)
	{
		if (small(*stack_a, arr, start) == 1)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			increment(&start, &end, size);
		}
		else if (small(*stack_a, arr, end) == 1)
		{ 
			pb( stack_a, stack_b);
			if (*stack_b && (*stack_b)->next
				&& (*stack_b)->value < (*stack_b)->next->value)
				sb(stack_b);
			increment(&start, &end, size);
		}
		else
			ra(stack_a);
			
	}
	revirse_stack_a(stack_a, stack_b);
}

void	revirse_stack_a(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	max_index;

	max_index = 0;
	size = 0;
	while (*stack_b)
	{
		max_index = max_value(*stack_b);
		size = size_node(*stack_b);
		if (max_index <= size / 2)
		{
			while (max_index > 0)
			{
				rb(stack_b);
				max_index--;
			}
		}
		else
		{
			while (max_index < size)
			{
				rrb(stack_b);
				max_index++;
			}
		}
		pa(stack_a, stack_b);
	}
}

void	increment(int *start, int *end, int size)
{
	if (*end < size - 1)
		(*end)++;
	if (*start < *end)
		(*start)++;
}
