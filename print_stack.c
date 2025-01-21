/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:20:49 by iel-asef          #+#    #+#             */
/*   Updated: 2025/01/20 17:21:16 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack_b)
{
	while (stack_b)
	{
		printf("%d ->", stack_b->value);
		stack_b = stack_b->next;
	}
	printf("NULL\n");
}
