/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheak_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:21:54 by iel-asef          #+#    #+#             */
/*   Updated: 2025/01/24 11:34:39 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_number(char **input)
{
	int	i;
	int	j;

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

int	beta_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	check_double(char **input)
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
			if ((ft_atoi(input[i], NULL)) == (ft_atoi(input[k], NULL)))
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
	if (check_number(numbers) || check_double(numbers) || check_max(numbers)
		|| check_space(numbers))
	{
		write(2, "Error\n", 6);
		free_string(numbers);
		exit(1);
	}
	return (0);
}

int	check_max(char **input)
{
	int		i;
	long	num;
	int		j;

	j = 0;
	i = 0;
	while (input[i])
	{
		num = ft_atoi(input[i], &j);
		if (num == -1 && beta_strcmp(input[i], "-1"))
			return (1);
		if (j)
			return (1);
		if (num > INT_MAX || num < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}
