/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solong.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelacou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:33:57 by ddelacou          #+#    #+#             */
/*   Updated: 2023/01/11 14:33:59 by ddelacou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLONG_H
# define SOLONG_H

#include "mlx.h"
#include <unistd.h>
#include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42

typedef struct s_list
{
    void            *content;
    struct s_list    *next;
}                    t_list;

typedef struct s_tab
{
    char    **tab;
    int        x;
    int        y;
}    t_tab;

typedef struct s_pos
{
    int        x;
    int        y;
}    t_pos;



char    *get_next_line(int fd);
char    *ft_strjoin(char *s1, char *s2);
size_t  ft_strlen(char *s);
void    *ft_calloc(size_t count, size_t size);
int     rectanglemap(char **tab);
int     wall(t_tab tab);
int     collectible(t_tab tab);
int     exit(t_map map);
int     otherletter(t_tab tab);
t_pos   *checkposition(t_pos *pos, int count);
t_pos   *checkplayer(t_tab tab);
t_list  map_list(t_list *lst, int fd);
t_map   read(int fd);


#endif
