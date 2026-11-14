/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:13:16 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/13 20:28:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t n, size_t size)
{
	void *p;
	if (n == 0 || size == 0)
	{
		p = malloc(1);
		if (p == NULL)
			return (NULL);
		ft_bzero(p, 1);
		return (p);
	}
	if (size > SIZE_MAX / n)
		return (NULL);
	p = malloc(n * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, n * size);
	return (p);
}
