/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 18:44:56 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/21 18:44:58 by gfattori         ###   ########.fr       */
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
