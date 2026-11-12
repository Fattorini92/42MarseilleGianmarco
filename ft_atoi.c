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

#include <stdlib.h>
#include <unistd.h>

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	n;

	n = nb;
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * -1);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
	{
		ft_putchar(n + '0');
	}
}
*/
	
int ft_atoi(const char *nptr)
       {
              int a;
              int sign;
              int result;

              a = 0;
              sign = 1;
              result = 0;
              while (nptr[a] == ' ')
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
              return result * sign;
       }

/*
int main ()
{
       ft_putnbr(ft_atoi("-asdkl"));
       return 0;
}
*/

       /*
DESCRIPTION
       The atoi() function converts the initial portion of the string pointed to by nptr to int.  The behavior is the same as


       except that atoi() does not detect errors.


RETURN VALUE
       The converted value or 0 on error.
       */

