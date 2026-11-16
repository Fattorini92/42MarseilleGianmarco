/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:30:34 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/16 23:58:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *contenido;
	contenido = {malloc(strlen(content)), NULL};
	if (contenido == NULL)
		return (NULL);
	return (contenido);
}

/*
Files to Submit
	- Parameters content : The content to store in the new node.
	Return Value A pointer to the new node
	External Functions malloc
	 Description Allocates memory(using malloc(3))
	 and returns a new node.
	 The ’content’ member variable is initialized with the given parameter ’content’.The variable
’next’ is initialized to NULL.

*/