/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:24:43 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/15 16:21:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split(char const *s, char c)
{
    char **results;
	size_t	start;
	size_t	end;

	if (s == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && start < ft_strchr(s, s1[start]))
		start++;
	end = ft_strlen(s);
	while (end > start && ft_strchr(s, s1[start + 1]))
		end++;
	return (ft_substr(s1, start, end - start));
}

/*
Files to Submit -
Parameters s: The string to be split.
c: The delimiter character.
Return Value The array of new strings resulting from the split.
NULL if any allocation fails.
The returned structure will be released using: 1)
free() on each string in the array; 2) free() the
array itself.
External Functions malloc, free
Description Allocates (with malloc(3)) and returns an array of
strings obtained by splitting ’s’ using the character
’c’ as a delimiter.
Each string in the returned array is allocated
independently.
The array of pointers itself is also allocated
dynamically.
The returned array must be NULL terminated.
*/