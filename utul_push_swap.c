/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utul_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-asef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:24:05 by iel-asef          #+#    #+#             */
/*   Updated: 2025/01/20 16:26:49 by iel-asef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count(char const *s, char c)
{
	int	i;
	int	count;
	int	next;

	i = 0;
	count = 0;
	next = 1;
	while (s[i])
	{
		if (s[i] != c && next == 1)
		{
			next = 0;
			count++;
		}
		else if (s[i] == c)
			next = 1;
		i++;
	}
	return (count);
}

static char	*copy(char *str, int start, int end)
{
	char	*word;
	int		i;

	word = malloc((end - start + 2) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	int i, (start), (j), (word);
	if (!s)
		return (NULL);
	word = count(s, c);
	result = malloc((word + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
			result[j++] = copy((char *)s, start, i);
	}
	result[j] = NULL;
	return (result);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*dst;
	int		i;
	int		j;

	if (!s1)
		return (strdup(s2));
	if (!s2)
		return (strdup(s1));
	if (!s1 && !s2)
		return (NULL);
	dst = malloc(strlen(s1) + strlen(s2) + 2);
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

long	ft_atoi(const char *str)
{
	long	r;

	int i, (s);
	i = 0;
	s = 1;
	r = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * s);
}
