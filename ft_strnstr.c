/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:11:32 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 14:11:33 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	x = ft_strlen(little);
	i = 0;
	if (x == 0)
		return ((char *)big);
	while (big[i] && i + x <= len)
	{
		if (ft_strncmp(big + i, little, len) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}

/*

SYNOPSIS
		#include <string.h>
		(See libbsd(7) for include usage.)

		char *    strnstr(const char *big, const char *little, size_t len);

DESCRIPTION
		The  strnstr() function locates the first occurrence of the null-terminated string little in the string big,
			where not more than len
		characters are searched.  Characters that appear after a ‘\0’ character are not searched.  Since the strnstr() function is a FreeBSD
		specific API, it should only be used when portability is not a concern.

RETURN VALUES
		If little is an empty string,
			big is returned; if little occurs nowhere in big,
			NULL is returned; otherwise a pointer to  the  first
		character of the first occurrence of little is returned.

EXAMPLES
		The following sets the pointer ptr to NULL,
			because only the first 4 characters of largestring are searched:

				const char *largestring = "Foo Bar Baz";
				const char *smallstring = "Bar";
				char *ptr;

				ptr = strnstr(largestring, smallstring, 4);

*/