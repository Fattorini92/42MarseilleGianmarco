/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:15:01 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/15 12:47:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*copy;

	len = ft_strlen(s) + 1;
	copy = malloc(len * sizeof(char));
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, s, len);
	return (copy);
}

/*
DESCRIPTION
				The strdup() function returns a pointer to a new string which is a duplicate of the string s.  Memory for the new string is obtained
				with malloc(3), and can be freed with free(3).

RETURN VALUE
				On success,
				the strdup() function returns a pointer to the duplicated string.  It returns NULL if insufficient memory was available,
				with errno set to indicate the error.

				*/