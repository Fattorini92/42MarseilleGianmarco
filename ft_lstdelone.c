/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:32:18 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/18 21:43:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return;
	del(lst->content);
	free(lst);
}

Files to Submit - Parameters lst : The node to free.del : The address of the function used to delete the content.Return Value None External
															  Functions free
																  Description Takes a node as parameter and frees its
																	  content using the function ’del’.Frees the node itself but does NOT free the next node.
