/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykang <hykang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 23:24:00 by hykang            #+#    #+#             */
/*   Updated: 2020/07/22 07:57:16 by hykang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_sqrt(int nb)
{
	int ret;

	ret = 1;
	if (nb == 0)
		return (0);
	if (nb ==1)
		return (1);
	while (ret * ret < nb )
	{
		ret++;
		if (nb % ret == 0 && ret * ret == nb)
			return (ret);
	}
	return (0);
}
