/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfattori <gfattori@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 14:02:55 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/10 14:28:25 by gfattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int	ft_isprint(int c);
int ft_atoi(const char *nptr);
void ft_bzero(void *s, size_t n);

/*
ft_list.h
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

*/
#endif