/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:24:43 by gfattori          #+#    #+#             */
/*   Updated: 2026/11/16 00:13:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t strcounter(char const *s, char c)
{
    size_t i;
    size_t counter;
    i = 0;
    counter = 0;
    while (s[i])
    {
        if (s[i] != c && (i == 0 || s[i - 1] == c))
        {
            counter++;
        }
        i++;
    }
    return (counter);
}

static void stringsfree(char **results, size_t count)
{
    size_t i;
    i = 0;
    while (i < count)
    {
        free(results[i]);
        i++;
    }
    free(results);
}

static int fill(char **results, char const *s, char c)
{
    size_t i;
    size_t j;
    size_t start;

    i = 0;
    j = 0;
    while (s[i] == c)
        i++;
    while (s[i])
    {
        start = i;
        while (s[i] && s[i] != c)
            i++;
        results[j] = ft_substr(s, start, i - start);
        if (results[j] == NULL)
        {
            stringsfree(results, j);
            return (0);
        }
        j++;
        while (s[i] == c)
            i++;
    }
    results[j] = NULL;
    return (1);
}

char **ft_split(char const *s, char c)
{
    char **results;
    if (s == NULL)
        return (NULL);
    results = malloc((strcounter(s, c) + 1) * sizeof(char *));
    if (results == NULL)
        return (NULL);
    if (!fill(results, s, c))
        return (NULL);
    return (results);
}

/*
Files to Submit -
Parameters s: The string to be split.
c: The delimiter character.
Return Value The array of new strings resulting from the split.
NULL if any allocation fails.
The returned structure will be released using:
 1) free() on each string in the array;
  2) free() the rray itself.
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