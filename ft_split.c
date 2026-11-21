/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 18:45:57 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/21 18:45:59 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strcounter(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			counter++;
		}
		i++;
	}
	return (counter);
}

static void	stringsfree(char **results, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(results[i]);
		i++;
	}
	free(results);
}

static int	fill(char **results, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		start = i;
		while (s[i] && s[i] != c)
			i++;
		results[j] = ft_substr(s, start, i - start);
		if (!results[j])
		{
			stringsfree(results, j);
			return (0);
		}
		j++;
		while (s[i] && s[i] == c)
			i++;
	}
	results[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**results;

	if (!s)
		return (NULL);
	results = malloc((strcounter(s, c) + 1) * sizeof(char *));
	if (!results)
		return (NULL);
	if (!fill(results, s, c))
		return (NULL);
	return (results);
}
