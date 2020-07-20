/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykang <hykang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:33:39 by hykang            #+#    #+#             */
/*   Updated: 2020/07/15 14:37:46 by hykang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	char a;

	while (*str != '\0')
	{
		a = *str++;
		if (a < 'A' || a > 'Z')
		{
			return (0);
		}
	}
	return (1);
}
