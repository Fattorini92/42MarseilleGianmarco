/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:10:37 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 14:10:39 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

SYNOPSIS
#include <string.h>

int	memcmp(const void s1[.n], const void s2[.n], size_t n);

DESCRIPTION
The	memcmp(void) function compares the first n bytes(each interpreted as unsigned char) of the memory areas s1 and s2.

	RETURN VALUE The memcmp() function returns an integer less than,
	equal to, or greater than zero if the first n bytes of s1 is found,
		respec‐ tively, to be less than, to match, or
	be greater than the first n bytes of s2.

	For a nonzero return value,
	the sign is determined by the sign of the difference between the first pair of bytes(interpreted as un‐ signed char) that differ in s1 and s2.

	If n is zero,
	the return value is zero.
