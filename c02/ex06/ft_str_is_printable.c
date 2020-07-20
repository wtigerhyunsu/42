/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykang <hykang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:38:28 by hykang            #+#    #+#             */
/*   Updated: 2020/07/15 21:02:07 by hykang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	char a;

	while (*str != '\0')
	{
		a = *str++;
		if (31 > a || a > 127)
		{
			return (0);
		}
	}
	return (1);
}