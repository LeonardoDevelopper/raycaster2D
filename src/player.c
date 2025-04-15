/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleodev <lleodev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:17:20 by lleodev           #+#    #+#             */
/*   Updated: 2025/04/14 15:44:31 by lleodev          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "rc.h"

void    init_player(t_rc *rc)
{
    rc->player = (t_player *)malloc(sizeof(t_player));
    rc->player->coords = get_player_poition(rc->map->matrix);
    printf("player_x: %d, player_y: %d", (int)(rc->player->coords.x / 50), (int)(rc->player->coords.y / 50));
    printf("\n\nplayer_x: %d, player_y: %d", (int)(rc->player->coords.x / 50), (int)(rc->player->coords.y / 50));
    rc->player->dir = 2 * PI;
    rc->player->angle = 0;
    rc->player->moving.foraward = false;
    rc->player->moving.backaward = false;
    rc->player->moving.left = false;
    rc->player->moving.right = false;
}

t_coords    get_player_poition(char **matrix)
{
    int i;
    int j;

    i = 0;
    while (matrix[i])
    {
        j = 0;
        while (matrix[i][j])
        {
            if (matrix[i][j] == 'P')
                return (t_coords){(float)(j * 50), (float)(i * 50)};
            j++;
        }
        i++;
    }
    return ((t_coords){(float)0, (float)0});
}
