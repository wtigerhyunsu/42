/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykang <hykang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 23:47:50 by hykang            #+#    #+#             */
/*   Updated: 2020/07/22 23:48:37 by hykang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *ret;
	int *temp;

	if (min >= max || !(ret = (int*)malloc(sizeof(int) * (max - min))))
		return (0);
	temp = ret;
	while (min < max)
		*(temp++) = min++;
	return (ret);
}
