/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:23:26 by iel-asef          #+#    #+#             */
/*   Updated: 2025/01/20 16:23:28 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stack **stack_a, t_stack **stack_b, int *arr, int size)
{
	if (size == 2)
		sort_2_number(stack_a);
	else if (size == 3)
		sort_3_number(stack_a);
	else if (size == 4)
		sort_4_number(stack_a, stack_b);
	else if (size == 5)
		sort_5_number(stack_a, stack_b);
	else
		sort_revirse(stack_a, stack_b, arr, size);
}

void	sort_2_number(t_stack **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
}

void	sort_3_number(t_stack **stack_a)
{
	if ((*stack_a)->value > (*stack_a)->next->value
		&& (*stack_a)->value > (*stack_a)->next->next->value)
		ra(stack_a);
	if ((*stack_a)->next->value > (*stack_a)->next->next->value)
	{
		sa(stack_a);
		ra(stack_a);
	}
	if ((*stack_a)->value > (*stack_a)->next->value)
		sa(stack_a);
}

void	sort_4_number(t_stack **stack_a, t_stack **stack_b)
{
	ft_sort_min(stack_a, stack_b);
	sort_3_number(stack_a);
	pa(stack_a, stack_b);
}

void	sort_5_number(t_stack **stack_a, t_stack **stack_b)
{
	ft_sort_min(stack_a, stack_b);
	sort_4_number(stack_a, stack_b);
	pa(stack_a, stack_b);
}
