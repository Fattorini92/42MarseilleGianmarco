/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:22:38 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 14:22:40 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Prototype char *ft_substr(char const *s, unsigned int start, size_t len);
Files to Submit
	- Parameters s : The string from which to create the substring.start : The start index of the substring in the string
’s’.len : The maximum length of the substring.Return Value The substring.NULL if the allocation fails.External Functions malloc Description Allocates(with malloc(3)) and returns a substring from the string ’s’.The substring begins at index ’start’ and is of maximum size ’len’
