/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleodev <lleodev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 13:57:56 by lleodev           #+#    #+#             */
/*   Updated: 2025/04/12 13:59:08 by lleodev          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "rc.h"

int mat_len(char **mat)
{
    int len;

    len = 0;
    while (mat[len])
        len++;
    return (len);
}
