/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utul_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:24:05 by iel-asef          #+#    #+#             */
/*   Updated: 2025/01/25 22:51:05 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	if (!str)
		return (0);
	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*beta_strjoin(char *s1, char *s2)
{
	char	*dst;
	int		i;
	int		j;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	if (!s1 && !s2)
		return (NULL);
	dst = malloc(ft_strlen(s1) + ft_strlen(s2) + 2);
	if (!dst)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i++] = ' ';
	while (s2[j])
		dst[i++] = s2[j++];
	dst[i] = '\0';
	return (dst);
}

int	cheak_atoi(long r, int s, int *j)
{
	if ((r * s) > 2147483647 || (r * s) < -2147483648)
	{
		if (j != NULL)
			*j = 1;
		return (0);
	}
	return (1);
}

long	ft_atoi(const char *str, int *j)
{
	long	r;
	int		i;
	int		s;

	i = 0;
	s = 1;
	r = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	if (ft_isdigit(str[i]) == 0)
		return (-1);
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		if (cheak_atoi(r, s, j) == 0)
			return (0);
		i++;
	}
	return (r * s);
}

char	*ft_strdup(const char *s1)
{
	size_t	len_s;
	char	*s;
	int		i;

	if (!s1)
		return (NULL);
	len_s = ft_strlen(s1);
	s = malloc(len_s + 1);
	if (!s)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
