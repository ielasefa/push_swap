/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:22:50 by iel-asef          #+#    #+#             */
/*   Updated: 2025/01/20 16:22:51 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*second;

	if (!(*stack_b))
		return ;
	second = *stack_b;
	*stack_b = second->next;
	second->next = *stack_a;
	*stack_a = second;
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first;

	if (!(*stack_a))
		return ;
	first = *stack_a;
	*stack_a = first->next;
	first->next = *stack_b;
	*stack_b = first;
}
