/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykang <hykang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 08:18:39 by hykang            #+#    #+#             */
/*   Updated: 2020/07/13 20:34:43 by hykang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pr(char a, char b, char c)
{
	while (a != 56)
	{
		b = a + 1;
		while (b != 57)
		{
			c = b + 1;
			while (c != 58)
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a == 55 && b == 56 && c == 57)
				{
					break ;
				}
				else
				{
					write(1, ", ", 2);
				}
				++c;
			}
			++b;
		}
		++a;
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = 48;
	b = a + 1;
	c = b + 1;
	pr(a, b, c);
}
