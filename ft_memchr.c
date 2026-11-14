/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:09:48 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/13 18:18:48 by marvin           ###   ########.fr       */
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
