/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:22:40 by iel-asef          #+#    #+#             */
/*   Updated: 2025/01/22 01:17:30 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

t_stack	*add_stack(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*new_node;
	char	**split_numbers;

	int i, j;
	stack_a = NULL;
	i = 1;
	while (i < ac)
	{
		split_numbers = ft_split(av[i], ' ');
		if (!split_numbers)
			return (NULL);
		j = 0;
		while (split_numbers[j])
		{
			new_node = add_node(atoi(split_numbers[j]));
			if (!new_node)
			{
				free_split(split_numbers);
				return (NULL);
			}
			add_back(&stack_a, new_node);
			j++;
		}
		free_split(split_numbers);
		i++;
	}
	return (stack_a);
}

int	main(int ac, char **av)
{
	int		*arr;
	int		size;
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack	*tmp;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		return (0);
	check_input(ac, av);
	stack_a = add_stack(ac, av);
	size = size_node(stack_a);
	arr = array_creat(&stack_a);
	sort(&stack_a, &stack_b, arr, size);
	while (stack_a)
	{
		tmp = stack_a->next;
		free(stack_a);
		stack_a = tmp;
	}
	free(arr);
	return (0);
}
