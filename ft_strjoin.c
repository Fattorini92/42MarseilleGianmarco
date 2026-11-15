/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:23:19 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/15 14:48:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *joinstring;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	joinstring = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (joinstring == NULL)
		return (NULL);
	ft_strlcpy(joinstring, s1, ft_strlen(s1) + 1);
	ft_strlcat(joinstring, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (joinstring);
}

/*
Files to Submit

	- Parameters s1 : The prefix string.s2 :
	 The suffix string.
	 Return Value The new string.
	 NULL if the allocation fails.
	 External Functions malloc
	  Description Allocates(with malloc(3)) and returns a new string,
	which is the result of the concatenation of ’s1’ and’s2’.
*/