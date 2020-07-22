/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykang <hykang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 15:22:56 by hykang            #+#    #+#             */
/*   Updated: 2020/07/19 15:24:03 by hykang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "print.h"
#include "rush.h"

extern t_dict *g_dict_three;
extern t_dict *g_dict_etc;
extern char g_print_char[];

void	input_char(char *str)
{
	int index;
	int str_index;

	index = 0;
	while (g_print_char[index])
		index++;
	str_index = 0;
	while (str[str_index] != '\0')
	{
		g_print_char[index + str_index] = str[str_index];
		str_index++;
	}
	g_print_char[index + str_index] = ' ';
	g_print_char[index + str_index + 1] = '\0';
}

int		process_100(int cal_number)
{
	int temp_number;

	while (cal_number >= 100)
	{
		if (cal_number != 100)
		{
			if (g_dict_three[cal_number].value != 0)
			{
				input_char(g_dict_three[cal_number].value);
				cal_number = 0;
				break ;
			}
		}
		temp_number = cal_number / 100;
		if (g_dict_three[temp_number].value != 0)
		{
			input_char(g_dict_three[temp_number].value);
		}
		if (g_dict_three[100].value != 0)
		{
			input_char(g_dict_three[100].value);
		}
		cal_number -= temp_number * 100;
	}
	return (cal_number);
}

int		process_10(int cal_number)
{
	int temp_number;

	while (cal_number >= 10)
	{
		if (g_dict_three[cal_number].value != 0)
		{
			input_char(g_dict_three[cal_number].value);
			cal_number = 0;
			break ;
		}
		temp_number = cal_number / 10;
		temp_number *= 10;
		if (g_dict_three[temp_number].value != 0)
		{
			input_char(g_dict_three[temp_number].value);
			cal_number -= temp_number;
			break ;
		}
		if (g_dict_three[10].value != 0)
		{
			input_char(g_dict_three[10].value);
		}
		cal_number -= temp_number * 10;
	}
	return (cal_number);
}

int		process_1(int cal_number)
{
	while (cal_number > 0)
	{
		if (g_dict_three[cal_number].value != 0)
		{
			input_char(g_dict_three[cal_number].value);
			cal_number = 0;
		}
	}
	return (cal_number);
}
