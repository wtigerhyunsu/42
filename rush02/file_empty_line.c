/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_empty_line.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjung <gjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 21:07:42 by gjung             #+#    #+#             */
/*   Updated: 2020/07/19 22:04:42 by gjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int		is_empty_line(int count, int *fd)
{
	char	*temp;

	if (count == 1)
	{
		if ((temp = malloc(sizeof(char) * (count))) == 0)
			return (0);
		read(*fd, temp, count);
		if (temp[0] == '\n')
			return (1);
	}
	return (0);
}
