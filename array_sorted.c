/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:29:35 by iel-asef          #+#    #+#             */
/*   Updated: 2025/01/20 17:18:12 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*array_sorted(int *arr, int size);
int	*array_creat(t_stack **stack_a)
{
	t_stack	*curr;
	int		size;
	int		i;
	int		*arr;
	int		*arr_sorted;

	if (!(*stack_a))
		return (NULL);
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
	arr_sorted = array_sorted(arr, size);
	return (arr_sorted);
}

int	*array_sorted(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
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
