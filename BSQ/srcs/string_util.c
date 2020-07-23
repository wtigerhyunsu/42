/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_util.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elim <elim@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 15:56:30 by elim              #+#    #+#             */
/*   Updated: 2020/07/22 16:18:35 by elim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

int		ft_memcpy(char *dest, char *src, int size)
{
	int	i;

	if (dest == NULL || src == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		*dest++ = *src++;
		i++;
	}
	return (i);
}

int		ft_atoi(char *nbr_str, int size)
{
	int		ret;
	int		i;

	ret = 0;
	i = 0;
	while (i < size)
	{
		ret = (ret * 10) + (nbr_str[i] - '0');
		i++;
	}
	return (ret);
}
