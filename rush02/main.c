/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjung <gjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 15:04:25 by hykang            #+#    #+#             */
/*   Updated: 2020/07/19 23:28:17 by gjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"
#include "print.h"
#include "file.h"
#include "dict.h"
#include "free_memory.h"
#include <stdlib.h>

#define DEAULT_DICT_FILE "numbers.dict"

extern t_dict *g_dict_three;
extern t_dict *g_dict_etc;
extern int g_etc_size;
extern int g_is_file_opened;

int		main(int argc, char **argv)
{
	g_dict_three = (t_dict*)malloc(SIZE * sizeof(t_dict));
	g_dict_etc = (t_dict*)malloc(SIZE * sizeof(t_dict));
	g_etc_size = 0;
	g_is_file_opened = 0;
	if (argc <= 1)
		return (is_argv_error());
	else if (argc == 2)
	{
			return (0);
		if (read_file(DEAULT_DICT_FILE) == 0)
		if (rush(argv[1]) == 1)
			free_memory();
		return (0);
	}
	else if (argc == 3)
	{
		if (read_file(argv[1]) == 0)
			return (0);
		if (rush(argv[2]) == 1)
			free_memory();
		return (0);
	}
	else
		return (is_argv_error());
	return (0);
}
