/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjung <gjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 14:27:26 by hykang            #+#    #+#             */
/*   Updated: 2020/07/19 23:28:16 by gjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "print.h"
#include "dict.h"
#include "free_memory.h"
#include "file_empty_line.h"

extern int g_etc_size;
int g_is_file_opened;
int g_fd_count;
int g_fd;

int				counting(int *fd, int *count)
{
	char buf[1];

	buf[0] = '0';
	*count = 0;
	while (buf[0] != '\n')
	{
		if (read(*fd, buf, 1) <= 0)
		{
			return (0);
		}
		*count = *(count) + 1;
	}
	return (1);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	if (size == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

char			*get_key_val(char *start, char *end)
{
	char *result;

	if ((result = (char*)malloc(sizeof(char) * (end - start + 1))) == 0)
		return (0);
	ft_strlcpy(result, start, end - start + 1);
	return (result);
}

int				one_line(int count, int *fd, char **key, char **value)
{
	int		i;
	char	*temp;
	char	*start;
	char	*end;

	if ((temp = malloc(sizeof(char) * (count))) == 0)
		return (0);
	read(*fd, temp, count);
	temp[count - 1] = '\0';
	i = 0;
	start = &temp[i];
	while (temp[i] != ':' && temp[i] != '\0')
		i++;
	if (temp[i] == '\0')
		return (0);
	end = &temp[i];
	*key = get_key_val(start, end);
	start = &temp[++i];
	while (temp[i] != '\0')
		i++;
	end = &temp[i];
	*value = get_key_val(start, end);
	free(temp);
	return (1);
}

int				read_file(char *path)
{
	int		count;
	char	*key;
	char	*value;

	g_is_file_opened = 1;
	g_fd_count = open(path, O_RDONLY);
	g_fd = open(path, O_RDONLY);
	while (counting(&g_fd_count, &count))
	{
		if (is_empty_line(count, &g_fd) == 1)
			continue;
		if (one_line(count, &g_fd, &key, &value) == 0)
			return (is_error());
		if (set_dict_value(key, value) == 0)
			return (is_error());
	}
	if (one_line(count + 1, &g_fd, &key, &value) == 0)
		return (is_error());
	if (set_dict_value(key, value) == 0)
		return (is_error());
	close(g_fd_count);
	close(g_fd);
	g_is_file_opened = 0;
	return (1);
}
