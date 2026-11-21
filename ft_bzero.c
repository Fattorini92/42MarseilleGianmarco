/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 18:38:02 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/21 18:38:08 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			a;

	p = (unsigned char *)s;
	a = 0;
	while (a < n)
	{
		p[a] = '\0';
		a++;
	}
}

/*
int	main(void)
{
	unsigned char	mine[10];
	unsigned char	ref[10];

	memset(mine, 'x', 10);
	memset(ref, 'x', 10);
	ft_bzero(mine, 5);
	bzero(ref, 5);
	if (memcmp(mine, ref, 10) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	return (0);
}
*/
