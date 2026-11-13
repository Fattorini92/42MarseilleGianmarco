/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:30:34 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 14:30:45 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Prototype t_list *ft_lstnew(void *content);
Files to Submit
	- Parameters content : The content to store in the new node.Return Value A pointer to the new node External Functions malloc Description Allocates memory(using malloc(3)) and returns a new node.The ’content’ member variable is initialized with the given parameter ’content’.The variable
’next’ is initialized to NULL.
