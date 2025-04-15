/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleodev <lleodev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:19:02 by lleodev           #+#    #+#             */
/*   Updated: 2025/04/15 10:29:01 by lleodev          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "rc.h"

void    init_sprites(t_rc *rc)
{
    int width = TILE_SIZE;
    int height = TILE_SIZE;
    rc->sprites = (t_sprites *)malloc(sizeof(t_sprites));
    rc->sprites->wall = mlx_xpm_file_to_image(rc->win->mlx, "assets/wall.xpm", &width, &height);
    rc->sprites->way = mlx_xpm_file_to_image(rc->win->mlx, "assets/way.xpm", &width, &height);
    rc->sprites->player = mlx_xpm_file_to_image(rc->win->mlx, "assets/player.xpm", &width, &height);
    
}

void    render_sprites(t_rc *rc)
{
    int i;
    int j;

    i = 0;
    while (i < rc->map->rows)
    {
        j = 0;
        while (j < rc->map->cols)
        {
            if (rc->map->matrix[i][j] == '1')
                mlx_put_image_to_window(rc->win->mlx, rc->win->mlx_win, rc->sprites->wall, j * TILE_SIZE, i * TILE_SIZE);
            j++;
        }
        i++;
    }
}