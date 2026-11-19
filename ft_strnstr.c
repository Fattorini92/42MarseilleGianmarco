/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:11:32 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/19 07:16:32 by marvin           ###   ########.fr       */
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
