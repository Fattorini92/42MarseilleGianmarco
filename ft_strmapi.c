/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:25:52 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/16 19:50:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t len;
	char *result;
	unsigned i;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

Files to Submit - Parameters s : The string on which to iterate.f : The function to apply to each character.Return Value The string created from the successive applications of
’f’.Returns NULL if the allocation fails.External Functions malloc
																		Description Applies the function ’f’ to each character of the string ’s’,
	passing its index as the first argument and the character itself as the second.A new string is created(using malloc(3)) to collect the results from the successive applications of ’f’.
