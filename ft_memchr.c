/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 18:43:55 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/21 18:43:57 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		d;
	size_t				i;

	p = (const unsigned char *)s;
	d = (unsigned char)c;
	i = 0;
	if (s == NULL || n == 0)
		return (NULL);
	while (i < n)
	{
		if (p[i] == d)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
