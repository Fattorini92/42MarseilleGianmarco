/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:33:01 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 14:33:13 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Prototype void ft_lstiter(t_list *lst, void (*f)(void *));
Files to Submit -
Parameters lst: The address of a pointer to a node.
f: The address of the function to apply to each
node’s content.
Return Value None
External Functions None
Description Iterates through the list ’lst’ and applies the
function ’f’ to the content of each node.
