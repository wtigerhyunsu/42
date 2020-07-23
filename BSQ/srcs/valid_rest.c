/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_rest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elim <elim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 16:14:44 by elim              #+#    #+#             */
/*   Updated: 2020/07/22 16:16:16 by elim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		is_printable(char ch)
{
	if (32 <= ch && ch <= 126)
		return (1);
	return (0);
}

int		is_valid_box_char(char **map)
{
	int		i;
	int		j;

	i = 1;
	while (i <= g_row_cnt)
	{
		j = 0;
		while (j < g_col_cnt)
		{
			if (!is_printable(map[i][j]))
				return (0);
			if (map[i][j] != g_c[0] && map[i][j] != g_c[1])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		is_same_as_col_cnt(char **map)
{
	int		i;

	i = 1;
	while (i <= g_row_cnt)
	{
		if (i == 1)
			g_col_cnt = ft_strlen(map[i]);
		else if (g_col_cnt != ft_strlen(map[i]))
			return (0);
		i++;
	}
	return (1);
}

int		is_valid_rest_line(char **map)
{
	if (!is_same_as_col_cnt(map))
		return (0);
	if (!is_valid_box_char(map))
		return (0);
	return (1);
}
