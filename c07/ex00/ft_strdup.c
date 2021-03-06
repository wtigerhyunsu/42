/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykang <hykang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 23:47:23 by hykang            #+#    #+#             */
/*   Updated: 2020/07/22 23:47:26 by hykang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*ret;

	idx = 0;
	while (src[idx])
		++idx;
	ret = (char*)malloc(idx + 1);
	ret[idx] = 0;
	while (--idx >= 0)
		ret[idx] = src[idx];
	return (ret);
}
