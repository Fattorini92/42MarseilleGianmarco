/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:02:55 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/15 15:57:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (NULL);
}

/*
SYNOPSIS
#include <string.h>

char										*strchr(const char *s, int c);
char										*strrchr(const char *s, int c);

#define _GNU_SOURCE See feature_test_macros(7)
#include <string.h>

char										*strchrnul(const char *s, int c);

DESCRIPTION
The	strchr(void) function returns a pointer to the first occurrence of the character c in the string s
.

The	strrchr(void) function returns a pointer to the last occurrence of the character c in the string s.

The	strchrnul(void) function is like strchr() except that if c is not found in s,
then it returns a pointer to the null byte at the end of s,
rather than NULL.

Here "character" means "byte";
these functions do not work with wide or
multibyte characters.

	RETURN VALUE The
	strchr() and
	strrchr() functions return a pointer to the matched character or
NULL if the character is not found.
The terminat‐ ing null byte is considered part of the string,
so that if c is specified as '\0',
these functions return a pointer to the termina‐ tor.

The
strchrnul() function returns a pointer to the matched character,
or a pointer to the null byte at the end of	s(i.e., s
	+ strlen(s)) if the character is not found.

*/