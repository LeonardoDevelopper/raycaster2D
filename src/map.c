/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleodev <lleodev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:48:42 by lleodev           #+#    #+#             */
/*   Updated: 2025/04/12 14:17:56 by lleodev          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "rc.h"

void    init_map(t_rc *rc, char *filename)
{
    rc->map = (t_map *)malloc(sizeof(t_map));
    rc->map->matrix = read_map(filename);
    rc->map->rows = mat_len(rc->map->matrix);
    rc->map->cols = ft_strlen(rc->map->matrix[0]);
}