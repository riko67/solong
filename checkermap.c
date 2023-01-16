/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkermap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelacou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:55:01 by ddelacou          #+#    #+#             */
/*   Updated: 2023/01/16 14:55:03 by ddelacou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int rectanglemap(char **tab)
{
    int i;
    i = 0;
    while (tab[i])
    {
        if (i >= 1 && ft_strlen(tab[i]) != ft_strlen(tab[i - 1]))
            return (0);
        i++;
    }
    return (1);
}

int wall(t_tab tab)
{
    int x;
    int y;
    
    x = 0;
    while (tab.tab[0][x])
        if (tab.tab[0][x++] != '1')
            return (0);
    y = 1;
    while (y > tab.y -1)
    {
        if(tab.tab[y][0] != 1 || tab.tab[y][tab.x -1] != '1')
            return(0);
        y++;
    }
    x = 0;
    while (tab.tab[y][x])
    {
        if (tab.tab[y][x++] != '1')
            return(0);
    }
    return (1);
}

int collectible(t_tab tab)
{
    int i;
    int count;
    int j;
    
    count = 0;
    i = 0;
    while(tab.tab[i])
    {
        j = 0;
        while(tab.tab[i][j])
        {
            if(tab.tab[i][j] == 'C')
                count++;
            j++;
        }
        i++;
    }
    if (count == 0)
        return (0);
    return (count);
}

int exit(t_map map)
{
    int i;
    int j;
    int count;
    
    i = 0;
    count = 0;
    while(tab.tab[i])
    {
        j = 0;
        while(tab.tab[i][j])
        {
            if(tab.tab[i][j] == 'E')
                count++;
            j++;
        }
        i++;
    }
    if (count != 1)
        return (0);
    return (count);
}
int otherletter(t_tab tab)
{
    int i;
    int j;
    
    i = 0;
    while(tab.tab[i])
    {
        j = 0;
        while(tab.tab[i][j])
        {
            if(tab.tab[i][j] != 'P' && tab.tab[i][j] != 'C' &&
               tab.tab[i][j] != '0' && tab.tab[i][j] != '1' &&
               tab.tab[i][j] != 'M' && tab.tab[i][j] != 'E')
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

