/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 18:41:57 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/21 18:42:01 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*follow;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		follow = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = follow;
	}
}
