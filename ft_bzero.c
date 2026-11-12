/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 13:36:21 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 13:36:22 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Some functions that you must reimplement, such as strlcpy, strlcat, and
bzero, are not included by default in the GNU C Library (glibc).
To test them against the system standard, you may need to include
<bsd/string.h> and compile with the -lbsd flag.
This behaviour is specific to glibc systems. If you are curious, take the
opportunity to explore the differences between glibc and BSD libc.


#include <strings.h>

void bzero(void s[.n], size_t n);
.n quiere decir que solo va a leer n bytes de s, y no más allá. 
Esto es importante para evitar desbordamientos de búfer y otros errores de memoria.

DESCRIPTION
       The  bzero() function erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes
       containing '\0') to that area.

RETURN VALUE
       None.

       */
#include <strings.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char *pointer:
    size_t i;
    pointer = (unsigned char *)s;
    i = 0;
       while (i < n)
       {
              pointer[i] = '\0';
              i++;
       }
}