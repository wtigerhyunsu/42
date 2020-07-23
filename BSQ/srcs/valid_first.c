/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_first.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elim <elim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 16:12:00 by elim              #+#    #+#             */
/*   Updated: 2020/07/22 17:02:52 by heryu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		is_same_as_row_cnt(char *map, int size)
{
	if (g_row_cnt != ft_atoi(map, size))
		return (0);
	return (1);
}

int		is_valid_nbr(char *nbr_str, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		if ('0' <= nbr_str[i] && nbr_str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

int		is_printable_map(char *map)
{
	int		i;

	i = 0;
	while (map[i] != '\0')
	{
		if (!is_printable(map[i++]))
			return (0);
	}
	return (1);
}

int		is_duplicate(char *c)
{
	if (c[0] == c[1] || c[1] == c[2] || c[2] == c[0])
		return (1);
	return (0);
}

int		is_valid_first_line(char **map)
{
	int		length;

	length = ft_strlen(map[0]);
	if (length < 4)
		return (0);
	if (is_duplicate(map[0] + length - 3))
		return (0);
	if (!is_printable_map(map[0]))
		return (0);
	if (!is_valid_nbr(map[0], length - 3))
		return (0);
	if (!is_same_as_row_cnt(map[0], length - 3))
		return (0);
	if (g_row_cnt == 0)
		return (0);
	return (1);
}
