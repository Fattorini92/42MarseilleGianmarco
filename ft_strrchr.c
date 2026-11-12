/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:08:01 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 14:08:02 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

SYNOPSIS
       #include <string.h>

       char *strrchr(const char *s, int c);

DESCRIPTION
       The strchr() function returns a pointer to the first occurrence of the character c in the string s.

       The strrchr() function returns a pointer to the last occurrence of the character c in the string s.

       Here "character" means "byte"; these functions do not work with wide or multibyte characters.

RETURN VALUE
       The strchr() and strrchr() functions return a pointer to the matched character or NULL if the character is not found.  The terminating null byte 
       is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the  terminator.




