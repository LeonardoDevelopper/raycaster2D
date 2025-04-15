/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleodev <lleodev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:48:21 by lleodev           #+#    #+#             */
/*   Updated: 2025/04/15 10:44:55 by lleodev          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "rc.h"

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    t_rc    *rc = (t_rc *)malloc(sizeof(t_rc));

    init_map(rc, MAP);
    init_win(rc);
    init_sprites(rc);
    init_player(rc);
    cast_rays(rc, rc->player);
    mlx_hook(rc->win->mlx_win, 2, 1L << 0, keypress, rc);
    mlx_hook(rc->win->mlx_win, 3, 1L << 1, keyrelease, rc);
    mlx_loop_hook(rc->win->mlx, game_loop, (void *)rc);
    mlx_loop(rc->win->mlx);
    return (EXIT_SUCCESS);
}