/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 13:01:50 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/13 13:47:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			a;

	p = (unsigned char *)s;
	a = 0;
	while (a < n)
	{
		p[a] = (unsigned char)c;
		a++;
	}
	return (s);
}

/*
int	main(void)
{
	unsigned char	mine[10];
	unsigned char	ref[10];

	memset(mine, 'x', 10);
	memset(ref, 'x', 10);
	if (ft_memset(mine, 'x', 10) == mine)
		printf("KO: wrong return (value\n"));
	memset(ref, 'A', 5);
	if (memcmp(mine, ref, 10) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	return (0);
}
*/