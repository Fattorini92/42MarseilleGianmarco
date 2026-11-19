/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:30:34 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/18 04:47:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *node;
	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
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