/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheak_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:21:54 by iel-asef          #+#    #+#             */
/*   Updated: 2025/01/22 01:28:26 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_nambre(char **input)
{
	int	i;
	int	j;

	if (!input)
		return (1);
	i = 0;
	while (input[i])
	{
		j = 0;
		while (input[i][j])
		{
			if (!ft_isdigit(input[i][j]) && !(j == 0 && (input[i][j] == '-'
						|| input[i][j] == '+')))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_dable(char **input)
{
	int	i;
	int	k;

	if (!input)
		return (1);
	i = 0;
	while (input[i])
	{
		k = i + 1;
		while (input[k])
		{
			if (atoi(input[i]) == atoi(input[k]))
				return (1);
			k++;
		}
		i++;
	}
	return (0);
}

int	check_error(char **numbers)
{
	if (!numbers)
		exit(1);
	if (check_nambre(numbers) || check_dable(numbers) || check_max(numbers)
		|| check_espace(numbers))
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	return (0);
}

int	check_input(int ac, char **av)
{
	char	*input;
	char	(**number);	
	char	*tmp;

	int result, (i);
	input = strdup(av[1]);
	if (!input)
		return (1);
	i = 2;
	while (i < ac)
	{
		tmp = ft_strjoin(input, av[i]);
		if (!tmp)
			free_input(input);
		free(input);
		input = tmp;
		i++;
	}
	number = ft_split(input, ' ');
	free(input);
	if (!number)
		free_input(*number);
	result = check_error(number);
	free_split(number);
	return (result);
}

int	check_max(char **input)
{
	int		i;
	long	num;

	i = 0;
	while (input[i])
	{
		num = ft_atoi(input[i]);
		if (num > INT_MAX || num < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}
