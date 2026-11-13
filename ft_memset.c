/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 13:01:50 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 13:01:51 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

? ? ?

#include <stddef.h>
#include <string.h>
#include <unistd.h>

	void
	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	*ft_memset(void *s, int c, size_t n)
{
	int		a;
	char	*byte_ptr;
	char	byte_val;

	byte_ptr = (char *)ptr;
	byte_val = (char)c;
	while (n--)
	{
		a = 0;
		byte_ptr[a] = byte_val;
	}
	return (ptr);
}

int	main(void)
{
	ft_putstr("Hello, world!");
	write(1, "\n", 1);
	ft_putstr(ft_memset("Hello, world!", 'x', 4));
	return (0);
}

SYNOPSIS
#include <string.h>

void	*memset(void s[.n], int c, size_t n);

DESCRIPTION
The	memset(void) function fills the first n bytes of the memory area pointed to by s with the constant byte c
	.

	RETURN VALUE The memset() function returns a pointer to the memory area s.
