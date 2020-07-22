/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykang <hykang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 23:24:49 by hykang            #+#    #+#             */
/*   Updated: 2020/07/21 23:29:34 by hykang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_find_next_prime(int nb)
{
	long	i;
	long	ret;
	int		cnt;

	ret = (long)nb;
	if (nb < 2)
		return (2);
	while (ret >= nb)
	{
		i = 2;
		cnt = 0;
		while (i * i <= ret)
		{
			if (ret % i == 0)
				cnt++;
			i++;
		}
		if (cnt == 0)
			break ;
		else
			ret++;
	}
	return ((int)ret);
}
