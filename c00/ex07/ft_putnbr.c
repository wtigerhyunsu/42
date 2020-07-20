/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykang <hykang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 13:53:53 by hykang            #+#    #+#             */
/*   Updated: 2020/07/14 10:57:47 by hykang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		x;
	int		i;
	int		y;
	char	a;
	char	b[10];

	a = 48;
	i = 0;
	y = 1;
	if (nb < 0)
	{
		write(1, "-", 1);
		y = -1;
	}
	else if(nb == 0)
	{
		x = nb + a ;
		write(1, nb, 1);
		return ;
	}	
	while (nb != 0)
	{
		x = nb % 10;
		b[i] = (x * y) + a;
		i++;
		nb = nb / 10;
	}
	while (i >= 0)
		write(1, &b[--i], 1);
}
