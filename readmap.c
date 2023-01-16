/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelacou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:32:31 by ddelacou          #+#    #+#             */
/*   Updated: 2023/01/16 14:32:33 by ddelacou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

t_list  map_list(t_list *lst, int fd)
{
    t_list tmp;
    char *str;
    str = get_next_line(fd);
    while(str)
    {
        tmp = ft_lstnew(s);
        ft_lstadd_back(&lst, tmp);
        s = get_next_line(fd);
    }
    return (lst)
}
t_map   read(int fd)
{
    char **tab;
    t_list *lst;
    t_list *tmp;
    t_map ret;
    int i;
    
    i = 0;
    lst = NULL;
    lst = map_list(lst, fd);
    tpm = lst;
    tab = malloc(sizeof(char) * (ft_lstsize(lst) + 1));
    if (!tab)
        exit(EXIT_FAILURE);
    while(tpm)
    {
        tab[i] =ft_strdup(tmp->content);
        tmp = tmp->next;
        i++;
    }
    tab[i] = '\0';
    ret.tab = ft_strlen(*tab);
    ret.x = ft_strlen(lst);
    ft_lstclear(&lst, free);
    return (ret);
}
