/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 13:40:25 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 13:40:26 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *memmove(void dest[.n], const void src[.n], size_t n);

DESCRIPTION
       The  memmove()  function copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes place
       as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then  copied
       from the temporary array to dest.

RETURN VALUE
       The memmove() function returns a pointer to dest.

