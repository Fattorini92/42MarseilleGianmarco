/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 13:53:46 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 13:53:48 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
DESCRIPTION
The	memcpy(void) function copies n bytes from memory area
 src to memory area dest.The memory areas must
not overlap.Use memmove(3) if the memory areas do overlap
	.

	RETURN VALUE The memcpy() function returns a pointer to dest.
	*/
/*
int	main(void)
{
	unsigned char	mine[11] = "abcdefghij";
	unsigned char	ref[11] = "9999999999";

	printf("mine: %s\n", mine);
	printf("ref: %s\n", ref);
	ft_memcpy(mine, mine + 2, 8);
	printf("mine: %s\n", mine);
	printf("ref: %s\n", ref);
	printf("mine + 2: %s\n", mine + 2);
	ft_memcpy(mine + 2, mine, 8);
	printf("mine: %s\n", mine);
	printf("ref: %s\n", ref);
	return (0);
}
*/