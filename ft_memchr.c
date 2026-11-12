/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:09:48 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 14:09:50 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

SYNOPSIS
       #include <string.h>

       void *memchr(const void s[.n], int c, size_t n);
       void *memrchr(const void s[.n], int c, size_t n);

       [[deprecated]] void *rawmemchr(const void *s, int c);

   Feature Test Macro Requirements for glibc (see feature_test_macros(7)):

       memrchr(), rawmemchr():
           _GNU_SOURCE

DESCRIPTION
       The  memchr()  function  scans  the  initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the
       bytes of the memory area pointed to by s are interpreted as unsigned char.

       The memrchr() function is like the memchr() function, except that it searches backward from the end of the n bytes pointed to  by  s
       instead of forward from the beginning.

       The  rawmemchr() function is similar to memchr(), but it assumes (i.e., the programmer knows for certain) that an instance of c lies
       somewhere in the memory area starting at the location pointed to by s.  If an instance of c is not found, the behavior is undefined.
       Use either strlen(3) or memchr(3) instead.

RETURN VALUE
       The memchr() and memrchr() functions return a pointer to the matching byte or NULL if the character does not occur in the given mem‐
       ory area.

       The rawmemchr() function returns a pointer to the matching byte.

