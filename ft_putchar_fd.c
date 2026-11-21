/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:27:09 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/11 14:27:11 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
Files to Submit
	- Parameters c : The character to output.
	fd : The file descriptor on which to write.
	Return Value None External Functions write
	Description Outputs the character ’c’ to the given file descriptor.
*/
