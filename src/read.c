/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleodev <lleodev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:29:39 by lleodev           #+#    #+#             */
/*   Updated: 2025/04/14 14:51:43 by lleodev          ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "rc.h"

char    **read_map(char *filename)
{
    int fd = open(filename, O_RDONLY);
    char    *map = (char *)calloc((sizeof(char ) * 2048), 1);
    char    *line = (char *)malloc(sizeof(char) * 43);

    int readed = read(fd, map, 42);
    map[readed] = '\0';
    while (readed > 0)
    {
        readed = read(fd, line, 42);
        line[readed] = '\0';
        strncat(map, line, readed);
    }
    char    *st;
    char    *normalize = (char *)malloc(sizeof(char ) * 1024);
    st = normalize;
    while (*map)
    {
        if (*map == '\n')
        {
            *st++ = ' ';
            map++;
        }
        else
            *st++ = *map++;
    }
    char **matrix = ft_split(normalize, ' ');
    return (matrix);
}
