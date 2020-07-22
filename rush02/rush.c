/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjung <gjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 14:41:48 by hykang            #+#    #+#             */
/*   Updated: 2020/07/19 21:22:41 by gjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "dict.h"
#include "is.h"
#include "file.h"
#include "atoi.h"
#include "print.h"
#include "free_memory.h"
#include "process.h"
#define PRINT_SIZE 4096

t_dict	*g_dict_three;
t_dict	*g_dict_etc;
char g_print_char[PRINT_SIZE];
extern int g_etc_size;

int		check_argv(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (is_number(str[index]) == 0)
		{
			return (-1);
		}
		index++;
	}
	if (index <= 0)
	{
		return (-2);
	}
	return (index);
}

char	*get_word_three(char *str, int length)
{
	char	*result;
	int		index;

	result = (char*)malloc((length + 1) * sizeof(char));
	index = 0;
	if (result == 0)
		return (0);
	while (index < length)
	{
		result[index] = str[index];
		index++;
	}
	result[index] = '\0';
	return (result);
}

int		cal_dict(char *str, int count, int is_first)
{
	int		number;
	int		cal_number;

	count = count - 1;
	number = ft_atoi(str);
	if (number == 0 && count < 0 && is_first == 1)
	{
		input_char(g_dict_three[number].value);
		return (0);
	}
	cal_number = number;
	if (cal_number >= 100)
		cal_number = process_100(cal_number);
	if (cal_number >= 10)
		cal_number = process_10(cal_number);
	if (cal_number > 0)
		cal_number = process_1(cal_number);
	if (number != 0)
	{
		if (count >= 0)
			input_char(g_dict_etc[count].value);
	}
	return (1);
}

int		make_ouput_word(char *str, int count, int rest_count)
{
	int		length;
	char	*ptr;
	int		index;
	char	*temp;

	index = 0;
	ptr = str;
	length = 3;
	if (g_etc_size + 1 < (rest_count > 0) + count)
		return (0);
	if (rest_count > 0)
	{
		temp = get_word_three(ptr, rest_count);
		cal_dict(temp, count, 1);
		free(temp);
		ptr = &ptr[rest_count];
	}
	while (count-- > 0)
	{
		temp = get_word_three(ptr, length);
		cal_dict(temp, count, 0);
		free(temp);
		ptr = &ptr[length];
	}
	return (1);
}

int		rush(char *str)
{
	int length;
	int count;
	int rest_count;
	int index;

	index = 0;
	while (index < PRINT_SIZE)
		g_print_char[index++] = '\0';
	length = check_argv(str);
	if (length < 0)
		return (is_argv_error());
	count = length / 3;
	rest_count = length % 3;
	if (make_ouput_word(str, count, rest_count) == 0)
		return (is_error());
	index = 0;
	while (g_print_char[index] != '\0')
		index++;
	g_print_char[index - 1] = '\0';
	printf_str(g_print_char);
	printf_str("\n");
	return (1);
}
