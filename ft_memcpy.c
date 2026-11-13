/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 13:38:36 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 13:38:37 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memcpy(void dest[restrict.n], const void src[restrict.n], size_t n);

DESCRIPTION
The	memcpy(void) function copies n bytes from memory area src to memory area dest.The memory areas must not overlap.Use memmove(3) if the memory areas do overlap
	.

	RETURN VALUE The memcpy() function returns a pointer to dest.
