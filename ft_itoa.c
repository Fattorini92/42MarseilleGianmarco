/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:25:21 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/19 16:27:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(int n)
{
	size_t	count;

	count = 1;
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*ft_integerloop(int n, size_t len, size_t negative, char *result)
{
	result[len] = '\0';
	while (len > negative)
	{
		result[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	if (negative > 0)
		result[0] = '-';
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;
	size_t	negative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	negative = 0;
	if (n < 0)
	{
		negative = 1;
		n = -n;
	}
	len = count_digits(n) + negative;
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	ft_integerloop(n, len, negative, result);
	return (result);
}
