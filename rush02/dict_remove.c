/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_remove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjung <gjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 17:01:33 by gjung             #+#    #+#             */
/*   Updated: 2020/07/19 19:17:39 by gjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*remove_space_key(char *str)
{
	int		s_idx;
	int		e_idx;
	char	*result;

	s_idx = 0;
	e_idx = 0;
	while (str[e_idx] != ' ')
	{
		if (str[e_idx] == '\0')
			break ;
		e_idx++;
	}
	if ((result = (char*)malloc((e_idx - s_idx + 1))) == 0)
		return (0);
	while (s_idx < e_idx)
	{
		result[s_idx] = str[s_idx];
		s_idx++;
	}
	result[s_idx] = '\0';
	return (result);
}

char		*remove_space_value(char *str)
{
	int		s_idx;
	int		e_idx;
	char	*result;
	int		index;

	s_idx = 0;
	e_idx = 0;
	index = 0;
	while (str[s_idx] == ' ')
		s_idx++;
	if (str[s_idx] == '\0')
		return (0);
	while (str[s_idx + e_idx] != '\0')
		e_idx++;
	if ((result = (char*)malloc(((s_idx + e_idx) - s_idx + 1))) == 0)
		return (0);
	while (index < e_idx - s_idx + 1)
	{
		result[index] = str[s_idx + index];
		index++;
	}
	result[index] = '\0';
	return (result);
}
