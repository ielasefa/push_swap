/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 02:22:29 by iel-asef          #+#    #+#             */
/*   Updated: 2025/01/24 02:33:07 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"
#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	set_ins(t_stack **stack_a, t_stack **stack_b, char *get)
{
	if (!ft_strcmp("sa\n", get))
		sa(stack_a);
	else if (!ft_strcmp("sb\n", get))
		sb(stack_b);
	else if (!ft_strcmp("ss\n", get))
		ss(stack_a, stack_b);
	else if (!ft_strcmp("pa\n", get))
		pa(stack_a, stack_b);
	else if (!ft_strcmp("pb\n", get))
		pb(stack_a, stack_b);
	else if (!ft_strcmp("ra\n", get))
		ra(stack_a);
	else if (!ft_strcmp("rb\n", get))
		rb(stack_b);
	else if (!ft_strcmp("rr\n", get))
		rr(stack_a, stack_b);
	else if (!ft_strcmp("rra\n", get))
		rra(stack_a);
	else if (!ft_strcmp("rrb\n", get))
		rrb(stack_b);
	else if (!ft_strcmp("rrr\n", get))
		rrr(stack_a, stack_b);
	else
		return ((free(get)), free_stack(*stack_b), ft_error(stack_a));
}
