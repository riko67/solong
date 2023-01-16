/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker2map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelacou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:44:14 by ddelacou          #+#    #+#             */
/*   Updated: 2023/01/16 15:44:16 by ddelacou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


t_pos   *checkposition(t_pos *pos, int count)
{
    if (count != 1)
    {
        free(pos);
        return (0);
    }
    return (pos);
}
t_pos   *checkplayer(t_tab tab)
{
    int i;
    int j;
    int count;
    t_pos *pos;
    
    count = 0;
    i = -1;
    pos = malloc(sizeof(t_pos));
    if(!pos)
        return (NULL);
    while(tab.tab[++i])
    {
        j = -1;
        while(tab.tab[i][++j])
        {
            if(tab.tab[i][j] == 'P')
            {
                pos->x = j;
                pos->y = i;
                count++;
            }
        }
    }
    return(checkposition(pos, count));
}
