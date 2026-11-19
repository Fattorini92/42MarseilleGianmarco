/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 18:33:38 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/15 18:33:41 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int		i;
	char	*string;
	char	**results;

	printf("strlen:  %zu vs %zu\n", ft_strlen("hello"), strlen("hello"));
	printf("atoi:    %d vs %d\n", ft_atoi("  -42abc"), atoi("  -42abc"));
	printf("toupper: %c vs %c\n", ft_toupper('a'), toupper('a'));
	printf("strchr:  %s vs %s\n", ft_strchr("hello", 'l'), strchr("hello",
			'l'));
	string = "hola a todos";
	i = 0;
	results = ft_split(string, ' ');
	while ((results[i]))
	{
		printf("string cortado es : %s\n", results[i]);
		i++;
	}
	i = 0;
	while ((results[i]))
	{
		free(results[i]);
		i++;
	}
	free(results);
	return (0);
}
