/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:22:40 by iel-asef          #+#    #+#             */
/*   Updated: 2025/01/24 11:31:48 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

t_stack	*process_split_numbers(char **split_numbers, t_stack *stack_a)
{
	t_stack	*new_node;
	int		j;

	j = 0;
	while (split_numbers[j])
	{
		new_node = add_node(ft_atoi(split_numbers[j], NULL));
		if (!new_node)
		{
			free_string(split_numbers);
			return (NULL);
		}
		add_back(&stack_a, new_node);
		j++;
	}
	free_string(split_numbers);
	return (stack_a);
}

t_stack	*add_stack(int ac, char **av)
{
	t_stack	*stack_a;
	char	**split_numbers;
	int		i;

	stack_a = NULL;
	i = 1;
	while (i < ac)
	{
		split_numbers = ft_split(av[i], ' ');
		if (!split_numbers)
			return (NULL);
		stack_a = process_split_numbers(split_numbers, stack_a);
		if (!stack_a)
			return (NULL);
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

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		exit(1);
	check_input(ac, av);
	stack_a = add_stack(ac, av);
	size = size_node(stack_a);
	arr = array_creat(&stack_a);
	sort(&stack_a, &stack_b, arr, size);
	free_stack(stack_a);
	free(arr);
	return (0);
}
