/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 18:33:38 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/19 16:27:01 by marvin           ###   ########.fr       */
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
	ft_putstr_fd(ft_itoa(-1000), 1);
	ft_putchar_fd('\n', 1);
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
