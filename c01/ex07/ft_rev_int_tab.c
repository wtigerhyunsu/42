/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykang <hykang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:14:09 by hykang            #+#    #+#             */
/*   Updated: 2020/07/14 11:07:28 by hykang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int a;
	int z;

	a = 0;
	while (a != (size+1))
	{
		z = *tab++;
		*tab = tab[size];
		tab[size] = z;
		a++;
		size--;
	}
}
