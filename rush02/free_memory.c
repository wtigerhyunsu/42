/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_memory.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjung <gjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 15:27:17 by hykang            #+#    #+#             */
/*   Updated: 2020/07/19 22:16:08 by gjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include <stdlib.h>

extern t_dict *g_dict_three;
extern t_dict *g_dict_etc;

void	free_memory(void)
{
	int index;

	index = 0;
	while (index < SIZE)
	{
		if (g_dict_three[index].value != 0)
			free(g_dict_three[index].value);
		if (g_dict_etc[index].value != 0)
			free(g_dict_etc[index].value);
		index++;
	}
	free(g_dict_three);
	free(g_dict_etc);
}

void	free_memory_key_value(char **key, char **value)
{
	if (*key != 0)
		free(*key);
	if (*value != 0)
		free(*value);
}
