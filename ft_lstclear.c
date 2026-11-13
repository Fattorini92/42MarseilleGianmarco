/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:32:37 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 14:32:50 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Prototype void ft_lstclear(t_list **lst, void (*del)(void *));
Files to Submit
	- Parameters lst : The address of a pointer to a node.del : The address of the function used to delete the content of the node.Return Value None External Functions free Description Deletes and frees the given node and all its successors,
	using the function ’del’ and free(3).Finally,
	set the pointer to the list to NULL.
