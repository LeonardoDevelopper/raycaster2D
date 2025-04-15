/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleodev <lleodev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:43:43 by lleodev           #+#    #+#             */
/*   Updated: 2025/04/15 10:28:45 by lleodev          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "rc.h"

int keypress(int keycode, void *data)
{
    t_rc    *rc;

    rc = (t_rc *)data;
    if (keycode == KEY_ESC)
        exit(0);
    if (keycode == KEY_W)
        rc->player->moving.foraward = true;
    if (keycode == KEY_S)
        rc->player->moving.backaward = true;
    if (keycode == KEY_A)
        rc->player->moving.left = true;
    if (keycode == KEY_D)
        rc->player->moving.right = true;
    if (keycode == KEY_ARROW_LEFT)
        rc->player->moving.rotate_backaward = true;
    if (keycode == KEY_ARROW_RIGHT)
        rc->player->moving.rotate_foraward = true;

    return (0);
}

int keyrelease(int keycode, void *data)
{
    t_rc    *rc;

    rc = (t_rc *)data;
    if (keycode == KEY_W)
        rc->player->moving.foraward = false;
    if (keycode == KEY_S)
        rc->player->moving.backaward = false;
    if (keycode == KEY_A)
        rc->player->moving.left = false;
    if (keycode == KEY_D)
        rc->player->moving.right = false;
    if (keycode == KEY_ARROW_LEFT)
        rc->player->moving.rotate_backaward = false;
    if (keycode == KEY_ARROW_RIGHT)
        rc->player->moving.rotate_foraward = false;
    return (0);
}

void move_player(t_rc *rc)
{
    if (rc->player->moving.foraward)
    {
        if (rc->map->matrix[(int)((rc->player->coords.y / 50) - 1)][(int)(rc->player->coords.x / 50) ] == '0')
        {
            rc->map->matrix[(int)(rc->player->coords.y / 50)][(int)(rc->player->coords.x / 50)] = '0';
            rc->player->coords.y -= MOVE_SPEED;
            rc->map->matrix[(int)(rc->player->coords.y / 50)][(int)(rc->player->coords.x / 50)] = 'P';
        }
    }
    if (rc->player->moving.backaward)
    {
        if (rc->map->matrix[(int)(rc->player->coords.y / 50) + 1][(int)(rc->player->coords.x / 50) ] == '0')
        {
            rc->map->matrix[(int)(rc->player->coords.y / 50)][(int)(rc->player->coords.x / 50)] = '0';
            rc->player->coords.y += MOVE_SPEED;
            rc->map->matrix[(int)(rc->player->coords.y / 50)][(int)(rc->player->coords.x / 50)] = 'P';
        }
    }
    if (rc->player->moving.left)
    {
        if (rc->map->matrix[(int)(rc->player->coords.y / 50)][(int)(rc->player->coords.x / 50) - 1] == '0')
        {
            rc->map->matrix[(int)(rc->player->coords.y / 50)][(int)(rc->player->coords.x / 50)] = '0';
            rc->player->coords.x -= MOVE_SPEED;
            rc->map->matrix[(int)(rc->player->coords.y / 50)][(int)(rc->player->coords.x / 50)] = 'P';
        }
    }
    if (rc->player->moving.right)
    {
        if (rc->map->matrix[(int)(rc->player->coords.y / 50)][(int)(rc->player->coords.x / 50) + 1] == '0')
        {
            rc->map->matrix[(int)(rc->player->coords.y / 50)][(int)(rc->player->coords.x / 50)] = '0';
            rc->player->coords.x += MOVE_SPEED;
            rc->map->matrix[(int)(rc->player->coords.y / 50)][(int)(rc->player->coords.x / 50)] = 'P';
        }
    }
    if (rc->player->moving.rotate_backaward)
    {
        rc->player->dir -= ROTATE_SPEED;
    }
    if (rc->player->moving.rotate_foraward)
    {
        rc->player->dir += ROTATE_SPEED;
    }
}
