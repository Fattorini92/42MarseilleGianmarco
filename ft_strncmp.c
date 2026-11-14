/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:08:53 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/14 04:56:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && (p1[i] != '\0' || p2[i] != '\0'))
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/*
SYNOPSIS
		#include <string.h>

		int strcmp(const char *s1, const char *s2);
		int strncmp(const char s1[.n], const char s2[.n], size_t n);

DESCRIPTION
		The  strcmp() function compares the two strings s1 and s2.  The locale is not taken into account (for a locale-aware comparison,
			see
		strcoll(3)).  The comparison is done using unsigned characters.

		strcmp() returns an integer indicating the result of the comparison,
			as follows:

		•  0, if the s1 and s2 are equal;

		•  a negative value if s1 is less than s2;

		•  a positive value if s1 is greater than s2.

		The strncmp() function is similar,
			except it compares only the first (at most) n bytes of s1 and s2.

RETURN VALUE
		The strcmp() and strncmp() functions return an integer less than,
			equal to, or greater than  zero  if  s1  (or  the  first  n  bytes
		thereof) is found, respectively, to be less than, to match,
			or be greater than s2.

*/