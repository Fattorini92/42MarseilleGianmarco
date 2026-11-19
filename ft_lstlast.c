/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tf_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:31:33 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 14:31:48 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	unsigned int len;
	len = 0;
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (lst);
}

Files to Submit - Parameters lst : The beginning of the list.Return Value Last node of the list
									   External Functions None
										   Description Returns the last node of the list
