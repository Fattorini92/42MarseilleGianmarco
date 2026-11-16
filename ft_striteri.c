/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:26:23 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/16 20:17:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned i;
	if (s == NULL || f == NULL)
		return;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
