/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 18:43:03 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/15 18:43:11 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

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
