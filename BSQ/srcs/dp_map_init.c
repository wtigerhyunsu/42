/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dp_map_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elim <elim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 16:00:08 by elim              #+#    #+#             */
/*   Updated: 2020/07/22 16:01:44 by elim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	init_first_col(void)
{
	int		i;

	i = 0;
	while (i < g_row_cnt)
	{
		if (g_map[i][0] == g_c[0])
		{
			g_dp[i][0] = 1;
			if (g_max == -1)
			{
				g_max = g_dp[i][0];
				g_i = i;
				g_j = 0;
			}
		}
		i++;
	}
}

void	init_first_row(void)
{
	int		i;

	i = 0;
	while (i < g_col_cnt)
	{
		if (g_map[0][i] == g_c[0])
		{
			g_dp[0][i] = 1;
			if (g_max == -1)
			{
				g_max = g_dp[0][i];
				g_i = 0;
				g_j = i;
			}
		}
		i++;
	}
}

int		**create_dp_array(void)
{
	int		**ret;
	int		i;
	int		j;

	if ((ret = (int **)malloc(sizeof(int*) * g_row_cnt)) == NULL)
		return (NULL);
	i = 0;
	while (i < g_row_cnt)
	{
		if ((ret[i] = (int *)malloc(sizeof(int) * g_col_cnt)) == NULL)
		{
			while (i)
				free(ret[--i]);
			free(ret);
			return (NULL);
		}
		j = 0;
		while (j < g_col_cnt)
			ret[i][j++] = 0;
		i++;
	}
	return (ret);
}

void	init_max_index(int value)
{
	g_max = value;
	g_i = value;
	g_j = value;
}
