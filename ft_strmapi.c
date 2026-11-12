/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:25:52 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 14:25:53 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Prototype char *ft_strmapi(char const *s, char (*f)(unsigned
int, char));
Files to Submit -
Parameters s: The string on which to iterate.
f: The function to apply to each character.
Return Value The string created from the successive applications of
’f’.
Returns NULL if the allocation fails.
External Functions malloc
Description Applies the function ’f’ to each character of the
string ’s’, passing its index as the first argument
and the character itself as the second. A new string
is created (using malloc(3)) to collect the results
from the successive applications of ’f’.
