/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elim <elim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 15:58:31 by elim              #+#    #+#             */
/*   Updated: 2020/07/22 15:59:42 by elim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	**free_allocated_map(char **map, int size)
{
	while (size >= 0)
	{
		free(map[size]);
		size--;
	}
	free(map);
	return (NULL);
}

int		get_char_cnt(char *map, int pivot)
{
	int		char_cnt;

	char_cnt = 0;
	while (map[pivot + char_cnt] != '\0' && map[pivot + char_cnt] != '\n')
		char_cnt++;
	return (char_cnt);
}

int		get_line_count(char *str)
{
	int		cnt;
	int		i;

	cnt = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			cnt++;
		i++;
	}
	return (cnt);
}

char	**ft_split(char *map)
{
	char	**splited_map;
	int		pivot;
	int		char_cnt;
	int		line_cnt;

	if ((line_cnt = get_line_count(map)) == 0
		|| (splited_map = (char **)malloc(sizeof(char *) * line_cnt)) == NULL)
		return (NULL);
	g_row_cnt = line_cnt - 1;
	line_cnt = 0;
	pivot = 0;
	while (map[pivot] != '\0')
	{
		char_cnt = get_char_cnt(map, pivot);
		if (char_cnt == 0
			|| (splited_map[line_cnt] = (char *)malloc(char_cnt + 1)) == NULL)
			return (free_allocated_map(splited_map, line_cnt - 1));
		ft_memcpy(splited_map[line_cnt], map + pivot, char_cnt);
		splited_map[line_cnt][char_cnt] = '\0';
		line_cnt++;
		pivot += (char_cnt + 1);
	}
	return (splited_map);
}
