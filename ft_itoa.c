/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:25:21 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 14:25:21 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	int number;
	char* result;
	int i;
	i = 0;
	result = malloc((cifras) * sizeof(char));
	if(n < 0)
	{
	result[i] = "-";
	i++;
	}
	else
	{
	
	}

}


/*
Prototype char *ft_itoa(int n);
Files to Submit
	- Parameters n : the integer to convert.
	Return Value The string representing the integer.
	NULL if the allocation fails.External 
	Functions malloc 
	Description 
	Allocates(with malloc(3)) and 
	returns a string representing the integer received as an argument.
	Negative numbers must be handled.


	*/