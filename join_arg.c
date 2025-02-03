/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 11:03:40 by iel-asef          #+#    #+#             */
/*   Updated: 2025/01/30 00:16:47 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*join_arguments(int ac, char **av)
{
	char	*input;
	char	*tmp;
	int		i;

	input = ft_strdup(av[1]);
	if (!input)
		return (NULL);
	i = 2;
	while (i < ac)
	{
		if (av[i][0] == '\0' || check_space(&av[i]))
		{
			write(2, "Error\n", 6);
			free(input);
			exit(1);
		}
		tmp = beta_strjoin(input, av[i]);
		free(input);
		if (!tmp)
			return (NULL);
		input = tmp;
		i++;
	}
	return (input);
}

int	check_input(int ac, char **av)
{
	char	*input;
	char	**number;
	int		result;

	input = join_arguments(ac, av);
	if (!input)
		return (1);
	number = ft_split(input, ' ');
	free(input);
	if (!number)
		return (1);
	result = check_error(number);
	free_string(number);
	return (result);
}
