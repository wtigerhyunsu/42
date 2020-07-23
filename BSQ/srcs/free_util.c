/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elim <elim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 15:52:56 by elim              #+#    #+#             */
/*   Updated: 2020/07/22 16:20:03 by elim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		free_dp(void)
{
	int		i;

	i = 0;
	while (i < g_row_cnt)
	{
		free(g_dp[i]);
		i++;
	}
	free(g_dp);
	return (1);
}

int		free_map(char **splited_map)
{
	int		i;

	i = 0;
	while (i <= g_row_cnt)
	{
		free(splited_map[i]);
		i++;
	}
	free(splited_map);
	return (1);
}

void	free_all(int fd, char *map_data, char **splited_map, int **dp)
{
	if (fd > 0)
		close_file(fd);
	if (map_data != NULL)
		free(map_data);
	if (splited_map != NULL)
		free_map(splited_map);
	if (dp != NULL)
		free_dp();
}

void	ft_puterror(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(2, str, i);
}

void	map_error_free_all(int fd, char *map_data, char **splited_map, int **dp)
{
	ft_puterror("map error\n");
	free_all(fd, map_data, splited_map, dp);
}
