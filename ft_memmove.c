/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 18:44:42 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/21 18:44:45 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest == NULL || src == NULL)
		return (NULL);
	if (d < s)
		return (ft_memcpy(dest, src, n));
	while (n > 0)
	{
		d[n - 1] = s[n - 1];
		n--;
	}
	return (dest);
}

/*
int	main(void)
{
	unsigned char	mine[11] = "abcdefghij";
	unsigned char	ref[11] = "9999999999";

	printf("mine: %s\n", mine);
	printf("ref: %s\n", ref);
	ft_memmove(mine, mine + 2, 8);
	printf("mine: %s\n", mine);
	printf("ref: %s\n", ref);
	printf("mine + 2: %s\n", mine + 2);
	ft_memmove(mine + 2, mine, 8);
	printf("mine: %s\n", mine);
	printf("ref: %s\n", ref);
	return (0);
}
	*/
