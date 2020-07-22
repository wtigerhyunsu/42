/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjung <gjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 15:26:52 by hykang            #+#    #+#             */
/*   Updated: 2020/07/19 23:30:57 by gjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "free_memory.h"
#include "file.h"

extern int g_is_file_opened;
extern int g_fd_count;
extern int g_fd;

void	printf_str(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
		length++;
	write(1, str, length);
}

int		is_error(void)
{
	printf_str("Dict Error\n");
	if (g_is_file_opened == 1)
	{
		close(g_fd_count);
		close(g_fd);
		g_is_file_opened = 0;
	}
	free_memory();
	return (0);
}

int		is_argv_error(void)
{
	printf_str("Error\n");
	if (g_is_file_opened == 1)
	{
		close(g_fd_count);
		close(g_fd);
		g_is_file_opened = 0;
	}
	free_memory();
	return (0);
}
