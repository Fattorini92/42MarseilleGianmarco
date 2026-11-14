/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:12:31 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 14:12:32 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	a;
	int	sign;
	int	result;

	a = 0;
	sign = 1;
	result = 0;
	while (nptr[a] >= 9 && nptr[a] <= 13 || nptr[a] == ' ')
		a++;
	if (nptr[a] == '-' || nptr[a] == '+')
	{
		if (nptr[a] == '-')
			sign = -1;
		a++;
	}
	while (nptr[a] >= '0' && nptr[a] <= '9')
	{
		result = result * 10 + (nptr[a] - '0');
		a++;
	}
	return (result * sign);
}

/*considerar overflow en limites del numero*/

/*
int main ()
{
		ft_putnbr(ft_atoi("-asdkl"));
		return (0);
}
*/

/*
DESCRIPTION
The	atoi(void) function converts the initial portion of
 the string pointed to by nptr to int.  The behavior is the same as


except that	atoi(void) does not detect errors.


RETURN VALUE
The converted value or 0 on error.
*/
