/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:24:08 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 14:24:09 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Prototype char *ft_strtrim(char const *s1, char const *set);
Files to Submit -
Parameters s1: The string to be trimmed.
set: The reference set of characters to trim.
Return Value The trimmed string.
NULL if the allocation fails.
External Functions malloc
Description Allocates (with malloc(3)) and returns a copy of ’s1’
with the characters specified in ’set’ removed from
the beginning and the end of the string.
