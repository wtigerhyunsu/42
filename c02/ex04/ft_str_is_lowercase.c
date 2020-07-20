/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hykang <hykang@student.42seoel.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:31:12 by hykang            #+#    #+#             */
/*   Updated: 2020/07/15 14:33:11 by hykang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	char a;

	while (*str != '\0')
	{
		a = *str++;
		if (a < 'a' || a > 'z')
		{
			return (0);
		}
	}
	return (1);
}