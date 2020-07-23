/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dp_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elim <elim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 16:05:52 by elim              #+#    #+#             */
/*   Updated: 2020/07/22 16:06:32 by elim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	memorized_max_index(int i, int j)
{
	g_max = g_dp[i][j];
	g_i = i;
	g_j = j;
}

int		get_min_value(int i, int j)
{
	int		min;

	min = g_dp[i - 1][j - 1];
	if (min > g_dp[i][j - 1])
		min = g_dp[i][j - 1];
	if (min > g_dp[i - 1][j])
		min = g_dp[i - 1][j];
	return (min);
}
