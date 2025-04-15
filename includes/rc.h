/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rc.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleodev <lleodev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:48:10 by lleodev           #+#    #+#             */
/*   Updated: 2025/04/15 10:48:43 by lleodev          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef RC_H
# define RC_H

#include "libft.h"
#include "mlx.h"
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdbool.h>
#include <sys/time.h>


#ifndef FOV
# define FOV (PI / 3)
#endif

#ifndef MAP
# define MAP "assets/map_small.ber"
#endif

#ifndef TEXTURE
# define TEXTURE true
#endif

#ifndef CONTROLES
# define CONTROLES "keyboard"
#endif

#ifndef NUM_RAYS
# define NUM_RAYS 320
#endif

#ifndef TILE_SIZE
# define TILE_SIZE 50
#endif

# define PI 3.141592653589793

# define KEY_A 97
# define KEY_W 119
# define KEY_D 100
# define KEY_S 115
# define KEY_ESC 65307
# define KEY_ARROW_LEFT 65361
# define KEY_ARROW_RIGHT 65363
# define KEY_ARROW_UP 65362
# define KEY_ARROW_DOWN 65364
# define KEY_SHIFT 65505

# define MOVE_SPEED 0.2
# define ROTATE_SPEED 0.01

typedef struct s_coords
{
    float x;
    float y;
}   t_coords;

typedef struct s_sprites
{
    void    *wall;
    void    *way;
    void    *player;
}   t_sprites;

typedef struct s_win
{
    void    *mlx;
    void    *mlx_win;
    int     width;
    int     height;

}   t_win;

typedef struct s_map
{
    char    **matrix;
    int     rows;
    int     cols;

}   t_map;

typedef struct s_moving
{
    bool    foraward;
    bool    backaward;
    bool    left;
    bool    right;
    bool    rotate_foraward;
    bool    rotate_backaward;
}   t_moving;

typedef struct s_player
{
    t_moving    moving;
    t_coords    coords;
    int         angle;
    float   dir;
}   t_player;

typedef struct s_rc
{
    t_win    *win;
    t_map    *map;
    t_sprites   *sprites;
    t_player    *player;
}   t_rc;

void    init_win(t_rc *rc);
void    init_map(t_rc *rc, char *filename);
void    init_sprites(t_rc *rc);
void    render_sprites(t_rc *rc);
void    init_player(t_rc *rc);
void    cast_rays(t_rc *rc, t_player *player);
void    move_player(t_rc *rc);
char    **read_map(char *filename);
int         mat_len(char **mat);
int         is_wall(t_rc *rc, float x, float y);
int         game_loop(void *data);
int         keypress(int keycode, void *data);
int         keyrelease(int keycode, void *data);
t_coords    get_player_poition(char **matrix);

#endif