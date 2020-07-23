/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykang <hykang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 23:49:00 by hykang            #+#    #+#             */
/*   Updated: 2020/07/22 23:49:02 by hykang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int ret;
	int *temp;

	if (max <= min)
		return (0);
	ret = max - min;
	if (!(*range = (int*)malloc(sizeof(int) * ret)))
		return (-1);
	temp = *range;
	while (max > min)
		*temp++ = min++;
	return (ret);
}
