/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elim <elim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 16:06:49 by elim              #+#    #+#             */
/*   Updated: 2020/07/22 16:11:36 by elim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		is_valid_map(char **map)
{
	int		length;

	length = ft_strlen(map[0]);
	g_c[2] = map[0][length - 1];
	g_c[1] = map[0][length - 2];
	g_c[0] = map[0][length - 3];
	if (!is_valid_first_line(map))
		return (0);
	if (!is_valid_rest_line(map))
		return (0);
	g_map = map + 1;
	return (1);
}
