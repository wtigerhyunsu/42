/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjung <gjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 15:14:54 by hykang            #+#    #+#             */
/*   Updated: 2020/07/19 23:28:16 by gjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "dict.h"
#include "atoi.h"
#include "strlen.h"
#include "print.h"
#include "dict_remove.h"
#include "free_memory.h"

extern	t_dict	*g_dict_three;
extern	t_dict	*g_dict_etc;
int				g_etc_size;

int			set_three(char *key, char *value)
{
	int		key_;

	key_ = ft_atoi(key);
	if (key_ < 0)
	{
		free(key);
		free(value);
		return (0);
	}
	g_dict_three[key_].key = key_;
	g_dict_three[key_].value = value;
	return (1);
}

int			set_etc(char *key, char *value)
{
	int		key_;

	key_ = get_etc_key(key) - 1;
	if (key_ < 0)
	{
		free(key);
		free(value);
		return (0);
	}
	g_etc_size++;
	g_dict_etc[key_].key = key_;
	g_dict_etc[key_].value = value;
	return (1);
}

int			get_etc_key(char *key)
{
	int		zero_count;
	int		index;

	index = 0;
	zero_count = 0;
	if (key[index++] != '1')
		return (0);
	while (key[index] != '\0')
	{
		if (key[index] != '0')
			return (0);
		zero_count++;
		index++;
	}
	if (zero_count % 3 == 0)
		return (zero_count / 3);
	else
		return (0);
	return (1);
}

int			check_key_value_null(char *key, char *value)
{
	if (key == 0 || value == 0)
	{
		free(key);
		free(value);
		return (0);
	}
	return (1);
}

int			set_dict_value(char *key, char *value)
{
	int		key_length;
	int		key_;
	char	*temp_key;
	char	*temp_value;

	key_ = 0;
	if (check_key_value_null(key, value) == 0)
		return (0);
	temp_key = remove_space_key(key);
	temp_value = remove_space_value(value);
	free_memory_key_value(&key, &value);
	if (temp_key == 0 || temp_value == 0)
		return (0);
	key_length = ft_strlen(temp_key);
	if (key_length <= 3)
	{
		if (set_three(temp_key, temp_value) == 0)
			return (0);
	}
	else
	{
		if (set_etc(temp_key, temp_value) == 0)
			return (0);
	}
	return (1);
}
