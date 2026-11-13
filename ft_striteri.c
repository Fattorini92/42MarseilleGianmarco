/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:26:23 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 14:26:23 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Prototype void ft_striteri(char *s, void (*f)(unsigned int, char *));
Files to Submit
	- Parameters s : The string on which to iterate.f : The function to apply to each character.Return Value None External Functions None Description Applies the function ’f’ on each character of the string passed as argument,
	passing its index as first argument.Each character is passed by address to ’f’ to be modified if necessary.
