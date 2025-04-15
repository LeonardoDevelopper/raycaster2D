/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleodev <lleodev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:48:13 by lleodev           #+#    #+#             */
/*   Updated: 2025/04/15 09:40:55 by lleodev          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "rc.h"

int is_wall(t_rc *rc, float x, float y)
{
    int map_x = (int)(x / TILE_SIZE);
    int map_y = (int)(y / TILE_SIZE);
    
    if (map_x < 0 || map_x >= rc->map->cols || map_y < 0 || map_y >= rc->map->rows)
        return (1);
    return (rc->map->matrix[map_y][map_x] == '1');
}

void    cast_rays(t_rc *rc, t_player *player)
{
    float   step = 1;
    for(int i = 0; i <= NUM_RAYS; i++)
    {
        float   ray_angle = player->dir - (FOV / 2) + i * (FOV / NUM_RAYS);
        float   ray_x = player->coords.x;
        float   ray_y = player->coords.y;

        while (!is_wall(rc, ray_x, ray_y))
        {
            ray_x += cos(ray_angle) * step;
            ray_y += sin(ray_angle) * step;
            if (ray_x < 0 || ray_x >= rc->win->width || ray_y < 0 || ray_y >= rc->win->height)
                break ;
            mlx_pixel_put(rc->win->mlx, rc->win->mlx_win, ray_x, ray_y, 0xD4D4D4);
        }
    }
}