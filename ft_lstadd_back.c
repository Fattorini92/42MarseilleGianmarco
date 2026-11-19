/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:31:58 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 14:32:06 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return;
	new->next = *lst;
	*lst = new;
	return;
}
Files to Submit - Parameters lst : The address of a pointer to the first node of a
									   list.new : The address of a pointer to the node to be added.Return Value None External Functions None
													  Description Adds the node ’new’ at the end of the list.
