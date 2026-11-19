/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:32:37 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/19 07:14:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *follow;

	if (lst == NULL || del == NULL)
		return;
	while (*lst != NULL)
	{
		follow = (*lst)->next;
		ft_lstdlone(*lst, del);
		*lst = follow;
	}
}
