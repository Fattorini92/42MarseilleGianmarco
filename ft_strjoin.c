/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:23:19 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 14:23:20 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Prototype char *ft_strjoin(char const *s1, char const *s2);
Files to Submit -
Parameters s1: The prefix string.
s2: The suffix string.
Return Value The new string.
NULL if the allocation fails.
External Functions malloc
Description Allocates (with malloc(3)) and returns a new string,
which is the result of the concatenation of ’s1’ and
’s2’.
