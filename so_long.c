/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solong.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddelacou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:25:45 by ddelacou          #+#    #+#             */
/*   Updated: 2023/01/11 14:25:48 by ddelacou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int    deal_key(int key, void *param)
{
    ft_putchar('X');
    return (0);
}


int so_long()
{
    t_list list;
    void *mlx_ptr;
    void *win_ptr;
    mlx_ptr = mlx_init();
    win_ptr = mlx_new_window(mlx_ptr, 500, 500, "premiere fenêtre");
    mlx_mouse_hook (win_ptr, deal_key, (void *)0);
    mlx_loop(mlx_ptr);
}
