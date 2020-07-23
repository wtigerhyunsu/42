/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elim <elim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 15:55:35 by elim              #+#    #+#             */
/*   Updated: 2020/07/22 15:55:44 by elim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*read_map(int fd)
{
	char	buffer[1000 * 1000];
	int		read_size;
	int		current_size;
	char	*origin;
	char	*tmp;

	current_size = 0;
	origin = NULL;
	while ((read_size = read(fd, buffer, 1000 * 1000)) > 0)
	{
		if ((tmp = (char *)malloc(read_size + current_size + 1)) == NULL)
		{
			free(origin);
			return (NULL);
		}
		ft_memcpy(tmp, origin, current_size);
		ft_memcpy(tmp + current_size, buffer, read_size);
		current_size += read_size;
		tmp[current_size] = '\0';
		free(origin);
		origin = tmp;
	}
	return (origin);
}
