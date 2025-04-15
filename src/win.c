/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   win.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleodev <lleodev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:08:08 by lleodev           #+#    #+#             */
/*   Updated: 2025/04/15 10:45:51 by lleodev          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "rc.h"

void    init_win(t_rc *rc)
{
    rc->win = (t_win *)malloc(sizeof(t_win));
    rc->win->mlx = mlx_init();
    rc->win->width = (rc->map->cols * TILE_SIZE);
    rc->win->height = (rc->map->rows * TILE_SIZE );
    rc->win->mlx_win = mlx_new_window(rc->win->mlx, rc->win->width, rc->win->height, "raycaster2D");
}

int game_loop(void *data)
{
    t_rc    *rc = (t_rc *)data;

    if (ft_strncmp("mouse", CONTROLES, ft_strlen("mouse")) == 0)
    {
        int mouse_x, mouse_y;
        mlx_mouse_get_pos(rc->win->mlx, rc->win->mlx_win, &mouse_x, &mouse_y);
        rc->player->coords.x = mouse_x;
        rc->player->coords.y = mouse_y;
    }
    else
        move_player(rc);
    mlx_clear_window(rc->win->mlx, rc->win->mlx_win);
    if (TEXTURE)
        render_sprites(rc);
    cast_rays(rc, rc->player);
    usleep(6000);
    return (0);
}