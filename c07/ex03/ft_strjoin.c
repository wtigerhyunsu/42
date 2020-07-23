/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykang <hykang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 23:49:21 by hykang            #+#    #+#             */
/*   Updated: 2020/07/23 00:06:26 by hykang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	char	*temp;
	int		strl;
	int		i;

	if (!size)
	{
		ret = (char*)malloc(sizeof(char));
		*ret = 0;
		return (ret);
	}
	strl = 0;
	i = -1;
	while (++idx < size)
		strl += ft_strlen(strs[i]);
	ret = (char*)malloc((size - 1) * ft_strlen(sep) + strl + 1);
	temp = ft_strcat(ret, strs[0]);
	i = 0;
	while (++i < size)
	{
		temp = ft_strcat(temp, sep);
		temp = ft_strcat(temp, strs[i]);
	}
	*temp = 0;
	return (ret);
}
