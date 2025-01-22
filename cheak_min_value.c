/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheak_min_value.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:22:27 by iel-asef          #+#    #+#             */
/*   Updated: 2025/01/20 16:22:30 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_value(t_stack *stack_a)
{
	int	i;
	int	min;
	int	indix;

	min = stack_a->value;
	i = 0;
	indix = 0;
	while (stack_a)
	{
		if (min > stack_a->value)
		{
			min = stack_a->value;
			indix = i;
		}
		i++;
		stack_a = stack_a->next;
	}
	return (indix);
}

void	sort_min(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	min_indix;
	int	i;

	i = 1;
	while (i != 0)
	{
		min_indix = min_value(*stack_a);
		size = size_node(*stack_a);
		if (min_indix > size / 2)
		{
			while (min_indix > 0)
			{
				ra(stack_a);
				min_indix--;
			}
		}
		else
		{
			while (size > min_indix++)
				rra(stack_a);
		}
		pb(stack_a, stack_b);
		i--;
	}
}
