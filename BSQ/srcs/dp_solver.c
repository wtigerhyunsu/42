/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dp_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elim <elim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 16:02:41 by elim              #+#    #+#             */
/*   Updated: 2020/07/22 16:04:47 by elim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_map(void)
{
	int		i;

	i = 0;
	while (i < g_row_cnt)
	{
		write(1, g_map[i], g_col_cnt);
		write(1, "\n", 1);
		i++;
	}
}

void	modify_map(void)
{
	int		i;
	int		j;

	i = 0;
	while (i < g_max)
	{
		j = 0;
		while (j < g_max)
		{
			g_map[g_i - i][g_j - j] = g_c[2];
			j++;
		}
		i++;
	}
}

void	start_dp(void)
{
	int		i;
	int		j;

	i = 1;
	while (i < g_row_cnt)
	{
		j = 1;
		while (j < g_col_cnt)
		{
			if (g_map[i][j] == g_c[0])
			{
				g_dp[i][j] = get_min_value(i, j) + 1;
				if (g_max < g_dp[i][j])
					memorized_max_index(i, j);
			}
			j++;
		}
		i++;
	}
}

int		solve(void)
{
	init_max_index(-1);
	if ((g_dp = create_dp_array()) == NULL)
		return (0);
	init_first_row();
	init_first_col();
	start_dp();
	modify_map();
	print_map();
	return (1);
}
