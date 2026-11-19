/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:25:21 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/19 11:23:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t count_digits(int n)
{
	size_t count;

	count = 1;
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char *ft_itoa(int n)
{
	char *result;
	size_t len;
	size_t negative;

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
	result[len] = '\0';
	while (len > negative)
	{
		result[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	if (negative)
		result[0] = '-';
	return (result);
}
