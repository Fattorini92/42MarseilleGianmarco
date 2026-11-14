/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:08:01 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/13 21:54:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)(s + i));
	while (i > 0)
	{
		if (s[i - 1] == (char)c)
			return ((char *)(s + i - 1));
		i--;
	}
	return (NULL);
}
