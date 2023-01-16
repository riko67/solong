/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelacou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:29:10 by ddelacou          #+#    #+#             */
/*   Updated: 2022/12/16 18:29:13 by ddelacou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *ft_strjoin(char *s1, char *s2)
{
    int        i;
    int        j;
    char    *copy;

    j = 0;
    i = -1;
    if (!s1 || !s2)
    {
        free(s1);
        return (NULL);
    }
    copy = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
    if (!copy)
        return (NULL);
    while (s1[++i])
        copy[i] = s1[i];
    while (s2[j])
    {
        copy[i] = s2[j];
        j++;
        i++;
    }
    copy[i] = '\0';
    free(s1);
    return (copy);
}

size_t    ft_strlen(char *s)
{
    size_t    count;

    count = 0;
    if (!s)
        return (0);
    while (s[count] != '\0')
    {
        count++;
    }
    return (count);
}

void    ft_bzero(void *s, size_t n)
{
    size_t    i;
    char    *chaine;

    i = 0;
    chaine = (char *)s;
    while (i < n)
    {
        chaine[i] = '\0';
        i++;
    }
}

void    *ft_calloc(size_t count, size_t size)
{
    void    *copy;

    copy = malloc(count * size);
    if (copy == NULL)
        return (NULL);
    if (count * size == 0)
        return (copy);
    ft_bzero(copy, count * size);
    return (copy);
}
